#include "main.h"

/**
 * getStringLength - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int getStringLength(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}


