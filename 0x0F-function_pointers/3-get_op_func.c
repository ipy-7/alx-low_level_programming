#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - WWWWWWW
 * @s: WWWWWWWWW
 * Description: WWWWWWWW
 * Return: WWWWWWWW
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
