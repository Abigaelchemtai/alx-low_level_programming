#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - A function that Read text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fowl;
	ssize_t k;
	ssize_t w;

	fowl = open(filename, O_RDONLY);
	if (fowl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	w = read(fowl, buffer, letters);
	k = write(STDOUT_FILENO, buffer, w);

	free(buffer);
	close(fowl);
	return (k);
}
