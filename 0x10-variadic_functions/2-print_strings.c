#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - WWWWWWWWW
 * @sep: WWWWWWWWW
 * @n: WWWWWWWWW
 * Return: WWWWWWW
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", (s ? s : "(nil)"));
		if (sep && i != n - 1)
			printf("%s", sep);
	}

	printf("\n");
}
