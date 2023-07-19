#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: WWWWWWW
 * @argv: WWWWWWWW
 *
 * Return: WWWWWWWWWW
 */
int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);
	char *op;

	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func_ptr = get_op_func(argv[2]);
	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
