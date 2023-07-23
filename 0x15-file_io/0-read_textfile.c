#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file name to read
 * @letters: number of letters to be printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_stat, read_stat, write_stat;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	open_stat = open(filename, O_RDONLY);
	read_stat = read(open_stat, buffer, letters);
	write_stat = write(STDOUT_FILENO, buffer, read_stat);

	free(buffer);
	if (open_stat == -1 || read_stat == -1 || write_stat == -1)
		return (0);
	if (read_stat != write_stat)
		return (0);

	close(open_stat);
	return (write_stat);
}
