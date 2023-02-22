#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: returns to 1 if a letter, lowercase or uppercase
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
