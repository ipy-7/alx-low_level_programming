#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - WWWWWWW
 * @haystack: WWWWWWWWWW
 * @needle: WWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, len1, len2, j;

	len1 = strlen(haystack);
	len2 = strlen(needle);

	for (i = 0; i < len1; i++)
	{
		j = 0;
		while (haystack[i] == needle[j] && j < len2 && i < len1)
		{
			i++;
			j++;
		}

		if (j == len2)
			return (&haystack[i - j]);
	}

	return (NULL);
}
