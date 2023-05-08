#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- checks text file display to STDOUT.
 * @filename: The Text_file being read.
 * @letters: The number of letters to be read.
 * Return: The real value else print null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdt;
	ssize_t k;
	ssize_t l;

	fdt = open(filename, O_RDONLY);
	if (fdt == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);/*malloc allocation*/
	l = read(fdt, buffer, letters);
	k = write(STDOUT_FILENO, buffer, l);

	free(buffer);/**free end*/
	close(fdt);
	return (k);
}
/**Abbie the author*/
