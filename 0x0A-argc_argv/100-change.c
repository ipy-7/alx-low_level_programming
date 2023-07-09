#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * bruh - wWWWWWWWWW
 * @x: WWWWWWWWWWW
 * Description: WWWWWWWW
 * Return: WWWWWWWWWW
 */
int bruh(int x)
{
	int ans;

	ans = 0;
	while (x > 0)
	{
		if (x >= 25)
		{
			ans += x / 25;
			x %= 25;
		}
		else if (x >= 10)
		{
			ans += x / 10;
			x %= 10;
		}
		else if (x >= 5)
		{
			ans += x / 5;
			x %= 5;
		}
		else if (x >= 2)
		{
			ans += x / 2;
			x %= 2;
		}
		else
		{
			ans += x;
			x = 0;
		}
	}

	return (ans);
}

/**
 * main - Entry point
 * Description: WWWWWWWW
 * @argc: command line argument count
 * @argv: an array of strings storing command line arguments of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", bruh(atoi(argv[1])));

	return (0);
}
