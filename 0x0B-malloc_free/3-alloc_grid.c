#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - WWWWWWWWWWW
 * @w: WWWWWWWWW
 * @h: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
int **alloc_grid(int w, int h)
{
	int i, j;
	int **grid;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(h * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < h; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * w);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
