#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - WWWWWWWWWWW
 * @s: WWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char **strtow(char *s)
{
	char **arr;
	int i, j, len, words, ix;

	if (s == NULL || strlen(s) == 0)
		return (NULL);
	arr = (char **)malloc(sizeof(char *));
	for (i = 0, words = 0; i < (int)strlen(s); i++)
	{
		if (s[i] != ' ')
		{
			j = i;
			while (j < (int)strlen(s) && s[j] != ' ')
				j++;
			len = j - i;
			if (words != 1)
				arr = (char **)realloc(arr, (words + 1) * sizeof(char *));
			if (arr == NULL)
				return (NULL);
			arr[words] = (char *)malloc(len + 1);
			if (arr[words] == NULL)
			{
				for (j = 0; j < words; j++)
					free(arr[words]);
				free(arr);
				return (NULL);
			}

			for (j = i, ix = 0; j < len; j++, ix++)
				arr[words][ix] = s[j];
			arr[words][ix] = '\0';
			words++;
			i = j;
		}
	}

	arr = (char **)realloc(arr, (words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
	return (words != 0 ? arr : NULL);
}
