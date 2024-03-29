#include "main.h"

/**
 * append_text_to_file - Function that align text at the end of a file.
 * @filename: The pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 * Return: if fail - -1.else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, k, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)/**loops*/
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	k = write(p, text_content, length);

	if (p == -1 || k == -1)
		return (-1);

	close(p);
	return (1);
} /**abbie*/
