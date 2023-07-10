#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_arr - WWWWWWWWWWW
 * @arr: WWWWWWWW
 * @r: WWWWWWWWW
 * Description: WWWWWWWWWW
 */
void free_arr(char **arr, int r)
{
	int i;

	for (i = 0; i < r; i++)
	{
		free(arr[i]);
	}
	free(arr);
}

/**
 * strtow - WWWWWWWWWWW
 * @s: WWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char **strtow(char *s)
{
	char **arr;
	int i, j, len, words, ix, tmp;

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
			tmp = j;
			arr = (char **)realloc(arr, (words + 1) * sizeof(char *));
			if (arr == NULL)
				return (NULL);
			arr[words] = (char *)malloc(len + 1);
			if (arr[words] == NULL)
			{
				free_arr(arr, words);
				return (NULL);
			}

			for (j = i, ix = 0; ix < len; j++, ix++)
				arr[words][ix] = s[j];
			arr[words][ix] = '\0';
			words++;
			i = tmp;
		}
	}

	arr = (char **)realloc(arr, (words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
	return (words != 0 ? arr : NULL);
}
