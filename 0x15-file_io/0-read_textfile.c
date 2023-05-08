#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_stat, r_stat, w_stat;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o_stat = open(filename, O_RDONLY);
	r_stat = read(o_stat, buffer, letters);
	w_stat = write(STDOUT_FILENO, buffer, r_stat);

	if (o_stat == -1 || r_stat == -1 || w_stat == -1 || w_stat != r_stat)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o_stat);

	return (w_stat);
}
