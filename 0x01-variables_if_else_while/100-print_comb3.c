#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(48 + digit1);
				putchar(48 + digit2);
				if (digit1 != 8 || digit2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
