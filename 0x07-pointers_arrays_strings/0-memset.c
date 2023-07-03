#include <stdio.h>
#include "main.h"

/**
 * _memset - WWWWWWW
 * @s: WWWWWWWWWW
 * @b: WWWWWWWWWWW
 * @n: WWWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
