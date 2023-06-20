#include <stdio.h>
#include "main.h"

/**
 * times_table - wtwwwwwww
 *
 * Description: WWWWWWWWWWW
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int res;

			res = i * j;
			printf("%d", res);
			res = i * (j + 1);
			if (j != 9)
			{
				if (res < 10)
				{
					printf(",  ");
				}
				else
				{
					printf(", ");
				}
			}
		}
		putchar('\n');
	}
}
