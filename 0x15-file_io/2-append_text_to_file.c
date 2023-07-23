#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name for the file to update
 * @text_content: content to append in the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, w_bits, len = 0;

	if (!filename)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	file_desc = open(filename, O_WRONLY | O_APPEND);
	w_bits = write(file_desc, text_content, len);

	if (file_desc == -1 || w_bits == -1)
		return (-1);

	close(file_desc);
	return (1);
}
