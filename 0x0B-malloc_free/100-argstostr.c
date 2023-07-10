#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - WWWWWWWWWWW
 * @ac: WWWWWWWWW
 * @av: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, total, j, idx;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total = 0;
	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}

	s = (char *)malloc(total + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0, idx = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++, idx++)
		{
			s[idx] = av[i][j];
		}
		s[idx++] = '\n';
	}

	s[idx] = '\0';
	return (s);
}
