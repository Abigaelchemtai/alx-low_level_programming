#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to unsigned int
 * @b: The string with the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);/**if the statement is true return 0 **/

	for (w = 0; b[w]; w++)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[w] - '0');
	}
	return (decimal_value);
	/** else if statement is false return the decimal value*/
}
