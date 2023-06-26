#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - WWWWWWW
 * @str: WWWWWWWWWW
 *
 * Description: WWWWWWWWW
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
