#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * *infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0;
	int n2len = 0;
	int val1, val2, tmptot;
	int overflow = 1;
	int digits = 1;

	while (n1[n1len] != '\0')
		n1len++;
	while (n2[n2len] != '\0')
		n2len++;

	n1len--;
	n2len--;

	if (n1len >= size_r || n2len >= size_r)
		return (0);

	while (n1len >= 0 || n2len >= 0 || overflow == 1)
	{
		val1 = n1len >= 0 ? *(n1 + n1len) - '0' : 0;
		val2 = n2len >= 0 ? *(n2 + n2len) - '0' : 0;
		tmptot = val1 + val2 + overflow;

		overflow = (int)(tmptot >= 10);

		if (digits >= size_r)
			return (0);

		*(r + digits) = (tmptot % 10) + '0';
		digits++;
		n1len--;
		n2len--;
	}

	if (digits == size_r)
		return (0);

	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
