#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list argv;
	int i = 0;
	char *current_string, *separator = "";

	va_start(argv, format);

	if (!format)
		return;

	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%s%c", separator, va_arg(argv, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argv, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argv, double));
				break;
			case 's':
				current_string = va_arg(argv, char *);
				if (!current_string)
					current_string = "(nil)";
				printf("%s%s", separator, current_string);
				break;
			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(argv);
}
