#include "main.h"

/**
 * set_bit - Function that sets a bit at a given index to one
 * @n: number pointer
 * @index: set index of bit to set to one
 * Return: one for success, -one for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);/*indexing*/

	*n = ((1UL << index) | *n);
	return (1);
}
