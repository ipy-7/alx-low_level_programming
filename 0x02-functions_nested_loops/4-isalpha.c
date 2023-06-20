#include <stdio.h>
#include "main.h"

/**
 * _isalpha - wwwwwwwwwww
 *
 * @c: the character to be checked
 *
 * Return: 1 if the character is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 91));
}
