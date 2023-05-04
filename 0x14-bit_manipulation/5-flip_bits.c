#include "main.h"

/**
 * flip_bits - Function that counts the number of bits to change
 * @n: the first integer
 * @m: the second integer
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, countif = 0;
	unsigned long int present;
	unsigned long int exclusivte = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		present = exclusivte >> k;
		if (present & 1)
			countif++;
	}

	return (countif);
}
