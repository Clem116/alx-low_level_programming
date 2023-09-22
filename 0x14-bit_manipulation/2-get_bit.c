#include "main.h"

/**
 * get_bit - Outputs Values
 * @i: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int i, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (i >> index) & 1;

	return (bit_val);
}

