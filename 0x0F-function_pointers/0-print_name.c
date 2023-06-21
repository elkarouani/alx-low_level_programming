#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to be printed
 * @f: the function responsible for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
