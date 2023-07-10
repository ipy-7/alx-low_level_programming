#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - WWWWWWWWWWW
 * @s1: WWWWWWWWW
 * @s2: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}

	ptr = (char *)malloc(len1 + len2);
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (j = 0; j < len1; j++, i++)
	{
		ptr[i] = s1[j];
	}

	for (j = 0; j < len2; j++, i++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
