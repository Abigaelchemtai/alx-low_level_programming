#include "main.h"
/**
 * reverse_array - A function that compaires two strings
 * @a: value of the first string
 * @n: number of elements in a tray
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
