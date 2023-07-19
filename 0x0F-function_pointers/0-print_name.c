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
	if (name == NULL || strlen(name) == 0 || (*f) == NULL)
		return;

	(*f)(name);
}
