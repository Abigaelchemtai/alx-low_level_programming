#include "main.h"
/**
 * get_bit - Function that returns value of a bit at index in decimal number
 * @n: The number to search
 * @index: The index of the bit
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
