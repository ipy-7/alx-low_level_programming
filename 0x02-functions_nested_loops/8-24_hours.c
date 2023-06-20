#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - wtwwwwwww
 *
 * Description: WWWWWWWWWWW
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		int w;

		w = (i == 2 ? 4 : 9);
		for (j = 0; j <= w; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(':');
					putchar('0' + k);
					putchar('0' + l);
					putchar('\n');
				}
			}
		}
	}
}
