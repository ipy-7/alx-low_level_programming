#include <stdio.h>
#include "main.h"

/**
 * isPrime - wwwwwwww
 * @n: WWWWWWWWW
 * Description: WWWWWWW
 * Return: wWWWWWWWWWWW
 */
int isPrime(long long n)
{
	long long i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
