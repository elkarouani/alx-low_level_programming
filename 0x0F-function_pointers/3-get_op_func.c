#include "calc.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: the operator giving by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", opp_add},
		{"-", opp_sub},
		{"*", opp_mul},
		{"/", opp_div},
		{"%", opp_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; *(opearation + i).op, i++)
	{
		if (strcmp(*(operations + i).op, s) == 0)
			return (*(operations + i).f);
	}

	return (NULL);
}
