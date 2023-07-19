#include <stdio.h>
#include <string.h>

/**
 * print_name - WWWWWWWWW
 * @name: WWWWWWWW
 * @f: WWWWWWWWWW
 * Description: WWWWWWWW
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || strlen(name) == 0)
		return;

	(*f)(name);
}
