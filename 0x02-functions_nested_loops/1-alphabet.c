#include <main.h>
/**
 * main - Aphabetic loops
 *
 */
void Print_aphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('/n');
}

