#include "main.h"

/**
 * print_binary - prints the binary equivalent of  Decimal number
 * @k: number To print in binary
 */
void print_binary(unsigned long int k)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 23; i >= 0; i--)
	{
		current = n >> i;

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

