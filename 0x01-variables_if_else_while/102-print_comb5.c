#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
					if (digit1 != digit3 || digit2 != digit4)
					{
						putchar(48 + digit1);
						putchar(48 + digit2);
						putchar(' ');
						putchar(48 + digit3);
						putchar(48 + digit4);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
