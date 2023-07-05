#include <stdio.h>
#include "main.h"

int is_prime(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_number - wWWWWWWWWW
 * @n: WWWWWWWWW
 * Description: WWWWWWWWW
 * Return: WWWWWWW
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - WWWWWWWWW
 * @n: WWWWWWWWWW
 * @i: WWWWWW
 * Description: WWWWWWWWWW
 * Return: djlakjwdldj
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if ((i * i) > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}
