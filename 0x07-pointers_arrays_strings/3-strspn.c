#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - WWWWWWW
 * @s: WWWWWWWWWW
 * @accept: WWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len1, len2, flag, j;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		flag = 0;
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				flag = 1;
		}

		if (!flag)
			return (i);
	}

	return (i);
}
