#include <stdio.h>
/**
 * print_rev - a function that reverses a string
 * @s: value of the string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int m = 0;
	int i;

	while (*s != '\0')
        {
		m++;
		s++;
	}
	s--;
	for (i = m; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
