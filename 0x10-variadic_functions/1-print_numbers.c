#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - WWWWWWWWW
 * @sep: WWWWWWWWW
 * @n: WWWWWWWWW
 * Return: WWWWWWW
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (sep && i != n - 1)
			printf("%s", sep);
	}

	printf("\n");
}
