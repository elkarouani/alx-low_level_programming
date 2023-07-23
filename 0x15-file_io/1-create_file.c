#include "main.h"

/**
 * create_file - creates a file.
 * @filename: new file name
 * @text_content: content for the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, w_bits, len = 0;

	if (!filename)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_bits = write(file_desc, text_content, len);

	if (file_desc == -1 || w_bits == -1)
		return (-1);

	close(file_desc);
	return (1);
}
