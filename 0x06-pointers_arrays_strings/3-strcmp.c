#include "main.h"
/**
 * _strcmp - compares pointers to two strings.
 * @s1: Apointer to the first string to be compaired
 * @s2: Apointer to the second string to be compaired
 * Return: If str1 <  str2, negative difference of nmatched characters
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
