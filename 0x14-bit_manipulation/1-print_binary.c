#include "main.h"

/**
 * print_binary - Displays Results
 * @i: number to print in binary
 */
void print_binary(unsigned long int i)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = i >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

