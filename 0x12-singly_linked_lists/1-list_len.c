#include <stddef.h>
/* Definition of a list structure */
typedef struct no_of_elements
	{
	char *str;
	size_t len;
	struct no_of_elements *next;
	}list_t;
/**
 * list_len - print number of elements in a linked list
 * @h: points to head of a linked list
 *
 * Return: Number pf elements in a node
 */
size_t no_of_elements(const list_t *h)
{
size_t node = 0;

while (h != NULL)
{
node++;
h = (*h).next;
}
return (node);
}
