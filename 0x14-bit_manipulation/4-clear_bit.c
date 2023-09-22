#include "main.h"

/**
 * clear_bit - Clears Bit Manipulator
 * @i: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *i, unsigned int index)
{
	if (index > 63)
		return (-1);

	*i = (~(1UL << index) & *i);
	return (1);
}


