#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - WWWWWWW
 * @dest: WWWWWWWWWW
 * @src: WWW
 * Description: WWWWWWWWW
 * Return: ptr to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
