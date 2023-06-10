#include <stdio.h>
#include "main.h"

/**
 * main - main program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: arguments passed to the program
 *
 * Return: 0 (exit with success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
