#include "main.h"
/**
 * _strspn - Entry point
 * @s: ist input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n, data, check;

	for (k = 0; s[k] != '\0'; k++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				data++;
				check = 1;
			}
		}
	if (check == 0)
	return (k);
	}
return (k);
}
