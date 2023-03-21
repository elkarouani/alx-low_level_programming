#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to check
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	_putchar(48 + (n % 10));
	return (n % 10);
}
