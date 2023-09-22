#include "main.h"

/**
 * set_bit - nbagsagsagdb sets a bit at a given index to 1
 * @i: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *i, unsigned int index)
{
	if (index > 63)
		return (-1);

	*i = ((1UL << index) | *i);
	return (1);
}


