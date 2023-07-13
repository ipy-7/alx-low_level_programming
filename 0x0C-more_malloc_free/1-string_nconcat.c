#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - WWWWWWWWW
 * @s1: WWWWWWWWWW
 * @s2: WWWWWWWW
 * @n: WWWWWWW
 * Description: WWWWWWWWWWW
 * Return: pointer to the allocated memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, len1, len2, j;
	char *p;

	len1 = (s1 == NULL ? 0 : strlen(s1));
	len2 = (s2 == NULL ? 0 : strlen(s2));

	n = (n > len2 ? len2 : n);
	p = (char *)malloc(len1 + n + 1);

	if (p == NULL)
		return (NULL);

	for (idx = 0; idx < len1; idx++)
	{
		p[idx] = s1[idx];
	}

	for (j = 0; j < n; j++, idx++)
	{
		p[idx] = s2[j];
	}
	p[idx] = '\0';

	return (p);
}
