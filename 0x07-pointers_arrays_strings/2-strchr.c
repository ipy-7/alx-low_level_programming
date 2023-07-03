#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - WWWWWWW
 * @s: WWWWWWWWWW
 * @c: WWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	unsigned int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return NULL;
}
