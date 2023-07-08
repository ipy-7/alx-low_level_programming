#include <stdio.h>

/**
 * main - Entry point
 * Description: WWWWWWWW
 * @argc: command line argument count
 * @argv: an array of strings storing command line arguments of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (argv[1][0] - 48) * (argv[2][0] - 48));

	return (0);
}
