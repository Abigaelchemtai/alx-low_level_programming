#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function that allocates buffer 1024 bytes.
 * @file: Name of the file buffer storage.
 * Return: Newly-allocated pointer  buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Function that closes file descriptions.
 * @fd: The file descriptor to be closed.
 * Return: the file.
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)/**loops*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Function that copies the contents of files.
 * @argc: Number of arguments in program.
 * @argv: Array of pointers for the arguments.
 * Return: on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int pre, post, t, p;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	pre = open(argv[1], O_RDONLY);
	t = read(pre, buff, 1024);
	post = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (pre == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		p = write(post, buff, t);
		if (post == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		t = read(pre, buff, 1024);
		pre = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buff);
	close_file(pre);
	close_file(post);

	return (0);
}
/** anbbie */
