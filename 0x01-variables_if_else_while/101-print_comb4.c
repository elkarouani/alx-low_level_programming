#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					putchar(48 + digit1);
					putchar(48 + digit2);
					putchar(48 + digit3);
					if (digit1 != 7 || digit2 != 8 || digit3 != 9)
					{
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
