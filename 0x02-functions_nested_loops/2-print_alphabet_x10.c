#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int i;

	i = 0;

	while (i < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
