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
	int i, len;

	len = strlen(str);
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
