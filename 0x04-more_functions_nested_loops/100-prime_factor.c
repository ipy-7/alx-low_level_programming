#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * isPrime - wwwwwwww
 * @n: WWWWWWWWW
 * Description: WWWWWWW
 * Return: wWWWWWWWWWWW
 */
int isPrime(long n)
{
	long i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

/**
 * largestPrimeFactor - WWWWWWWWW
 * @n: WWWWWWWWWWWW
 *
 * Description: WWWWWWWWWW
 * Return: largest prime factor of the number n
 */
long largestPrimeFactor(long n)
{
	long i, ans = 1;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0 && isPrime(i))
		{
			ans = ans < i ? i : ans;
		}
	}

	return (ans);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%ld\n", largestPrimeFactor(612852475143));

	return (0);
}
