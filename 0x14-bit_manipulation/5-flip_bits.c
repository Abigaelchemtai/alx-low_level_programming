#include "main.h"
/**
 * flip_bits - A function that counts the number of bits to
 * change from one number to another
 * @n: The first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, check = 0;
	unsigned long int prev;
	unsigned long int negate = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		prev = negate >> h;
		if (prev & 1)
			check++;
	}
	return (check);
}
