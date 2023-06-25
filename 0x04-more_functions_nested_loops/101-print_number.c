#include <stdio.h>
#include "main.h"


/**
 * print_number - WWWWWWWWWW
 * @n: WWWWWWWWWWW
 *
 * Description: WWWWWWWWWWW
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar(48 + (n % 10));
}
