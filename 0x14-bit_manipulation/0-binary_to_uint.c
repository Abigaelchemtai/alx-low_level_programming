#include "main.h"
/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: A pointer to a string containing the binary number
 * Return: the converted number
 * or 0 if there is more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		value = 2 * value + (b[k] - '0');
	}

	return (value);
}
