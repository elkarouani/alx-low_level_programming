#include <stdio.h>
#include "main.h"

/**
 * main - main program that adds positive numbers
 * @argc: number of arguments
 * @argv: the arguments passed by the program
 *
 * Return: 0 (exit with success) or 1 (exit with error)
 */
int main(int argc, char **argv)
{
	int i, j;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	i = 1;
	while (i <= argc - 1)
	{
		if (_atoi(argv[i]) >= 0)
			total += _atoi(argv[i++]);
	}

	printf("%d\n", total);
	return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: the integer parsed from the requested string
 */
int _atoi(char *s)
{
	int len = 0;
	int sign = 1;
	int isNumberDetected = 0;
	int result = 0;

	while (s[len] != '\0')
	{
		if (s[len] == '-')
			sign *= -1;
		if (s[len] == '+')
			sign *= +1;
		if (s[len] >= '0' && s[len] <= '9')
		{
			isNumberDetected = 1;
			if (result > 0)
				result *= 10;
			if (result == 2147483640 && s[len] == '8')
				result = -2147483648;
			else
				result += s[len] - 48;
		}
		if ((s[len] < '0' || s[len] > '9') && isNumberDetected == 1)
			break;
		len++;
	}

	return (result == -2147483648 ? result : sign * result);
}
