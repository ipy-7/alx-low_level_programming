#include <stdio.h>
#include "main.h"

/**
 * _sqrt - WWWWWWWWW
 * @n: WWWWWWWW
 * @i: WWWWWWWWWW
 * Description: WWWWWWWW
 * Return: WWWWWWW
 */
int _sqrt(int n, int i)
{
	if (n <= 0 || (i * i) > n)
		return (-1);

	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - WWWWWWWWW
 * @n: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: djlakjwdldj
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
