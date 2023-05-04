#include "main.h"

/**
 * clear_bit - Function sets the value of a given bit to zero
 * @n: pointer to number to be changed
 * @index: The index of the bit to be cleared
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);/**return negative value**/

	*n = (~(1UL << index) & *n);
	return (1);/*else return one*/
}
