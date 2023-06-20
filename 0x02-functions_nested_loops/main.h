#include <stdio.h>

/**
 * This is the header file for all functions implemented in this project
 */

void _putchar()
{
	printf("_putchar");
}

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
}
