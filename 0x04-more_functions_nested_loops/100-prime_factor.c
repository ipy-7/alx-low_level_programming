#include <stdio.h>
#include <math.h>
#include "main.h"


/**
 * largestPrimeFactor - WWWWWWWWW
 * @n: WWWWWWWWWWWW
 *
 * Description: WWWWWWWWWW
 * Return: largest prime factor of the number n
 */
long long largestPrimeFactor(long long n)
{
	long long i, ans = 1;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0 && isPrime(i))
		{
			ans = ans < i ? i : ans;
		}
	}

	return (ans);
}
