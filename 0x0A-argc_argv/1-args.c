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
	argv[0] = "A";
	printf("%d\n", argc - 1);

	return (0);
}
