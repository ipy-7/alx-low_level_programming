#include <stdio.h>
#include "main.h"

/**
 * This is the header file for all functions implemented in this project
 * 
 * print_alphabet - prints alphabet in lowercase
 *
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
