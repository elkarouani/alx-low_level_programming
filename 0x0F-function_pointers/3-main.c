#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: length of program arguments
 * @argv: the arguments passed by the program
 *
 * Return: 0 (exit with success)
 */
int main(int argc, char **argv)
{
	char *operator;
	int first_number, second_number;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_number = atoi(*(argv + 1));
	second_number = atoi(*(argv + 3));
	operator = *(argv + 2);

	operation = get_op_func(operator);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && second_number == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(first_number, second_number));
	return (0);
}
