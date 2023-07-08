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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
