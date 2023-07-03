#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - WWWWWWW
 * @s: WWWWWWWWWW
 * @accept: WWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
char *_strspn(char *s, char *accept)
{
	unsigned int i, len1, len2, j;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
