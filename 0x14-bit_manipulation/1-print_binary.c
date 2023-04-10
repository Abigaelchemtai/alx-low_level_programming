#include "main.h"
/**
 * print_binary - A function that prints binary equivalent of a decimal number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, check = 0;
	unsigned long int previous;

	for (k = 63; k >= 0; k--)
	{
		previous = n >> k;
		if (previous & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
	}
	if (!check)
		_putchar('0');
}
