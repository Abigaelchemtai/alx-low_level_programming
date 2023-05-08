#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: the  pointer to the type of the file to create.
 * @text_content: the pointer to the string to write to the file.
 * Return: if true 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fdt, k, length = 0;

	if (filename == NULL)
		return (-1);/**condition*/

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	} /** file allocation */

	fdt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(fdt, text_content, length);

	if (fdt == -1 || k == -1)
		return (-1);

	close(fdt);

	return (1);
}
/**abbie chemtai*/
