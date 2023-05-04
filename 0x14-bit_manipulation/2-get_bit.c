#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at an index
 * @n: The number to search
 * @index: The bit number
 * Return: The bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);/**-1**/

	value_bit = (n >> index) & 1;

	return (value_bit);
}
