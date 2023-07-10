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
	int len1, len2, i;
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
	for (; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < len2; i++)
	{
		ptr[i] = s2[i];
	}

	return (ptr);
}
