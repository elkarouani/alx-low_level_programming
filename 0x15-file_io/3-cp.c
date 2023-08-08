#include "main.h"
#include <stdio.h>

char *allocate_buffer(char *filename);
void close_file(int file_desc);

/**
 * allocate_buffer - allocate memory space for a buffer
 * @filename: file name to use
 *
 * Return: pointer of the new buffer
 */
char *allocate_buffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close a file custom handler
 * @file_desc: file descriptor of the opened file
 */
void close_file(int file_desc)
{
	int c_stat = close(file_desc);

	if (c_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - the main program
 * @argc: number of arguments
 * @argv: arguments list
 *
 * Return: specific exit code
 */
int main(int argc, char **argv)
{
	int from_desc, to_desc, r_bits, w_bits;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(*(argv + 2));
	from_desc = open(*(argv + 1), O_RDONLY);
	to_desc = open(*(argv + 2), O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r_bits = read(from_desc, buffer, 1024);

	do {
		if (from_desc == -1 || r_bits == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
			exit(98);
		}

		w_bits = write(to_desc, buffer, r_bits);
		if (to_desc == -1 || w_bits == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}

		r_bits = read(from_desc, buffer, 1024);
		to_desc = open(*(argv + 2), O_WRONLY | O_APPEND);
	} while (r_bits > 0);

	free(buffer);
	close_file(from_desc);
	close_file(to_desc);
	return (0);
}
