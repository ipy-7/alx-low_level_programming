#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * power - WWWWWWWWWW
 * @x: WWWWWWWW
 * @y: WWWWWWWW
 * Return: WWWWWW
 */
int power(unsigned int x, unsigned int y)
{
	return (y == 0 ? 1 : x * power(x, y - 1));
}

/**
 * print_binary - WWWWWWWW
 * @n: WWWWWWWW
 * Return: WWWWWWWWW
 */
void print_binary(unsigned long int n)
{
	while (n)
	{
		putchar(n & 1);
		n >>= 1;
	}
	_putchar('\n');
}
