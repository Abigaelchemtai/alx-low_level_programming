#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: returns to 1 if a letter, lowercase or uppercase
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
