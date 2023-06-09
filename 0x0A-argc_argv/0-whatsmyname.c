#include "main.h"

/**
 * main - main program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: arguments list
 *
 * Return: 0 (exit with success)
 */
int main(int argc, char **argv)
{
	char *program_name = *argv;

	while (*program_name != '\0')
	{
		_putchar(*program_name);
		*program_name += 1;
	}

	_putchar('\n');
	return (0);
}
