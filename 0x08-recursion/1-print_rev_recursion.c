#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - WWWWWWWWW
 * @s: WWWWWWWWWW
 * Description: WWWWWWWWWW
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
