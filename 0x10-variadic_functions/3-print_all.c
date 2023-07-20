#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_all - WWWWWWWWW
 * @format: WWWWWWWWW
 * Return: WWWWWWW
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int fl, it, len;

	len = strlen(format);
	va_start(ap, format);
	it = 0;
	while (it < len)
	{
		fl = 0;
		switch (format[it])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				fl = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				fl = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				printf("%s", (s ? s : "(nil)"));
				fl = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				fl = 1;
				break;
		};
		if (fl && it != len - 1)
			printf(", ");
		it++;
	}
	printf("\n");
	va_end(ap);
}
