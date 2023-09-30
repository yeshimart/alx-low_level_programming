#include "main.h"

/**
 * get_bit - returns The value of a bit at an index in a decimal number
 * @k: number to search
 * @index: Index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int k, unsigned int index)
{
	int bit_val;

	if (index > 33)
		return (-1);

	bit_val = (k >> index) & 1;

	return (bit_val);
}

