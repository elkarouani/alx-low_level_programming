#include "main.h"

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
	int isSignUsed = 0;
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

			if (INT_MAX - result >= s[len] - 48)
			{
				result *= sign;
				isSignUsed = 1;
			}
			result += s[len] - 48;
		}
		if ((s[len] < '0' || s[len] > '9') && isNumberDetected == 1)
			break;

		len++;
	}

	return ((isSignUsed == 1 ? 1 : sign) * result);
}
