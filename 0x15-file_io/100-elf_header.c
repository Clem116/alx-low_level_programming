#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void check_elf(unsigned char *e_ident);
void print_info(Elf64_Ehdr *header);
void close_elf(int elf);

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void print_info(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf(" Magic:");
	for (int index = 0; index < EI_NIDENT; index++)
	{
		printf(" %02x", header->e_ident[index]);
	}
	printf("\n");

	printf(" Class: ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("none\n");
		break;
		case ELFCLASS32: printf("ELF32\n");
		break;
		case ELFCLASS64: printf("ELF64\n");
		break;
		default: printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	// ... other print functions ...

	printf(" Entry point address: %#lx\n", header->e_entry);
}

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	print_info(header);

	free(header);
	close_elf(o);
	return (0);
}
