#include <stdio.h>
#include "main.h"

/**
 *
 * This is a header file for all functions implemented in this project
 *
*/

/**
 * 
 * print_alphabet - prints alphabet in lowercase
 * 
 * Return: Always 0 (Success)
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
