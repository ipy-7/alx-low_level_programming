#include <stdio.h>
#include "main.h"

/**
 * Header file for 1-alphabet.c
 */

/**
 * print_alphabet - please work
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
