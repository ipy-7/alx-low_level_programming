#include <stdio.h>
#include "main.h"

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "My School";
	rev_string(s);
	printf("%s\n", s);

	return (0);
}
