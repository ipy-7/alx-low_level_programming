#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - aaaaaaaaaa
 *
 * Description: WWWWWWWWWW
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 97; c <= 122; c++)
		{
			putchar(c);
		}

		putchar('\n');
	}
}
