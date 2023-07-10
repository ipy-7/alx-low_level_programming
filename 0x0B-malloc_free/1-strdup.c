#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - WWWWWWWWWWW
 * @str: WWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char *_strdup(char *str)
{
	int len, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	ptr = (char *)malloc(len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';
	return (ptr);
}
