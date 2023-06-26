#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - WWWWWWW
 * @s: WWWWWWWWWW
 *
 * Description: WWWWWWWWW
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
