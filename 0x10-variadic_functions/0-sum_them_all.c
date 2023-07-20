#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - WWWWWWWWW
 * @n: WWWWWWWWW
 * Return: WWWWWWW
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	return (sum);
}
