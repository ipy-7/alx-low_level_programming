#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - WWWWWWWWW
 * @s: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: djlakjwdldj
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
