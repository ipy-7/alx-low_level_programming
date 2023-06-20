#include <stdio.h>
#include "main.h"

/**
 * print_sign - wwwwwwwwwww
 * @n: Wwwwwww
 *
 * Description: WWWWWWWWWWW
 *
 * Return: 1 if greater than zero, -1 if less than zero, otherwise 0
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{
		putchar('-');
		ret = -1;
	}
	else
	{
		putchar('0');
		ret = 0;
	}

	return (ret);
}
