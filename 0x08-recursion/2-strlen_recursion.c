#include "main.h"
/**
 * _strlen_recursion - Returns length of a string
 * @s: The string to be measured
 * Return:Lngth of a string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
