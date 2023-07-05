#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - WWWWWWWWW
 * @n: WWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: djlakjwdldj
 */
int is_prime_number(int n, int i = 0)
{
	if (n <= 0)
		return (0);

	if ((i * i) > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_number(n, i + 1));
}
