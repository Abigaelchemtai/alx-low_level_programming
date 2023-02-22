#include "main.h"
/**
 * main - print_alphabet display letter
 * Description - print_alphabet that prints aphabet in small letter
 * Return: Always O.
 *
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
