#include "main.h"

/**
 * flip_bits - Flips Manipulator * to get from one number to another
 * @a: first number
 * @b: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ b;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}

	return (count);
}

