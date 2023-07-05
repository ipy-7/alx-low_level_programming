#include <stdio.h>
#include "main.h"

/**
 * factorial - WWWWWWWWW
 * @n: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: djlakjwdldj
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
