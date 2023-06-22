#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i;
	char *current_string;

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(argv, char *);
		if (!current_string)
			current_string = "(nil)";
		if (!separator)
			printf("%s", current_string);
		else if (separator && i == 0)
			printf("%s", current_string);
		else
			printf("%s%s", separator, current_string);
	}

	printf("\n");
	va_end(argv);
}
