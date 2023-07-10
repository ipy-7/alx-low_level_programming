#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - WWWWWWWWWWW
 * @grid: WWWWWWWWW
 * @h: WWWWWWWWWW
 * Description: WWWWWWWWWW
 */
void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
}
