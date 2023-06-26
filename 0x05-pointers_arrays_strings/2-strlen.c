#include <stdio.h>
#include "main.h"

/**
 * _strlen - WWWWWWW
 * @s: WWWWWWWWWW
 *
 * Description: WWWWWWWWW
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int i, cnt;


	cnt = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		cnt++;
	}

	return (cnt);
}
