#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - WWWWWWW
 * @str: WWWWWWWWWW
 *
 * Description: WWWWWWWWW
 */
void puts_half(char *str)
{
	int i, len, start;

	len = strlen(str);
	if (len & 1)
		start = (len - 1) / 2;
	else
		start = len / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
