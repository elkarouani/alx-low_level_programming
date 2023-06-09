#include <stdio.h>
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
	printf("%s\n", *argv);

	return (0);
}
