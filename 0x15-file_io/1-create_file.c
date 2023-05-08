#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o_stat, w_stat, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o_stat = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_stat = write(o_stat, text_content, len);

	if (o_stat == -1 || w_stat == -1)
		return (-1);

	close(o_stat);

	return (1);
}
