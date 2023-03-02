#include "main.h"
/**
 * _strncat - concentrates two strings
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: number of byte from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, dest_len = 0;

	while (dest[x++])
		dest_len++;
	for (x = 0; src[x] && x < n; x++)
		x[dest_len++] = src[x];
	return (dest);
}
