#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: value of length
 * Return: length.
 */
int _strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;

		s++;
	}
	return (m);
}
