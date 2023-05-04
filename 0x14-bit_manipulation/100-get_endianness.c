#include "main.h"

/**
 * get_endianness - Function that checks machine size of endian
 * Return: zero for small, one for large
 */
int get_endianness(void)
{
	unsigned int w = 1;
	char *ch = (char *) &w;

	return (*ch);
}
