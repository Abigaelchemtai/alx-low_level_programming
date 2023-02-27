#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a: the first integer value
 * @b:second integer value
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}
