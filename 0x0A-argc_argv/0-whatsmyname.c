#include "main.h"

/**
 * main - main program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: arguments list
 *
 * Return: 0 (exit with success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char *program_name = *argv;

	while (*program_name != '\0')
	{
		_putchar(*program_name);
		program_name += 1;
	}

	_putchar('\n');
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
