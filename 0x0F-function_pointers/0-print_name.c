#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - WWWWWWWWW
 * @name: WWWWWWWW
 * @f: WWWWWWWWWW
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
