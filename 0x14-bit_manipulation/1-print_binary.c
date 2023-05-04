#include "main.h"

/**
 * print_binary - Function prints binary equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int l, countif = 0;
	unsigned long int present;

	for (l = 63; l >= 0; l--)
	{
		present = n >> l;

		if (present & 1)
		{
			_putchar('1');
			countif++;
		}
		else if (countif)
			_putchar('0');
	}
	if (!countif)
		_putchar('0');
}
