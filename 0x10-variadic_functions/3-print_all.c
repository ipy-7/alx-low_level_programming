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
	char *s, c;
	int fl, it, cnt;

	it = cnt = 0;
	while (format && it < (int)strlen(format))
	{
		c = format[it];
		cnt += (c == 'c' || c == 'i' || c == 'f' || c == 's'), it++;
	}
	va_start(ap, format);
	it = -1;
	while (format && ++it < (int)strlen(format))
	{
		fl = 1;
		cnt--;
		switch (format[it])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 's':
				s = va_arg(ap, char *);
				printf("%s", (s ? s : "(nil)"));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				fl = 0;
				cnt++;
		};
		if (fl && cnt)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
