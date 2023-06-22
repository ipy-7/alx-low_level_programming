#include <stdio.h>
#include "main.h"

/**
 * more_numbers - wwwwwwwwww
 *
 * Description: WWWWWWWWWWW
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 9; k++)
	{
		int flag;

		flag = 0;
		for (i = 48; i <= 57; i++)
		{
			if (flag)
				_putchar('1');
			_putchar(i);

			if (i == 57)
			{
				i = 47;
				flag = 1;
			}

			if (flag && i == 52)
				break;
		}

		_putchar('\n');
	}
}
