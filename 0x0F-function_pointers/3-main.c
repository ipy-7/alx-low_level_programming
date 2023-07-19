#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: WWWWWWW
 * @argv: WWWWWWWW
 *
 * Description: WWWWWWWW
 * Return: WWWWWWWWWW
 */
int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);
	char *op, *ops[] = {"+", "-", "/", "*", "%"};
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = NULL;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(argv[2], ops[i]) == 0)
		{
			op = ops[i];
			break;
		}
	}

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func_ptr = get_op_func(argv[2]);
	if (!func_ptr)
		printf("EEEEEEEEE\n");
	else
		printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
