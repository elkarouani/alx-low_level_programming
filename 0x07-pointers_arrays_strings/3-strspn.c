#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int slen = 0;
	int acceptlen = 0;
	int result = 0;
	int flag;

	while (s[slen] != '\0')
	{
		flag = 0;

		while (accept[acceptlen] != '\0')
		{
			if (s[slen] == accept[acceptlen])
			{
				result++;
				flag = 1;
			}

			acceptlen++;
		}
		if (flag == 0)
			return (result);

		slen++;
	}

	return (0);
}
