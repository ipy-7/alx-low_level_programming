#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - WWWWWWW
 * @s: WWWWWWWWWW
 *
 * Description: WWWWWWWWW
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
