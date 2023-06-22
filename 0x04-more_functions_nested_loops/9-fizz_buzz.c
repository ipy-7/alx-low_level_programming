#include <stdio.h>
#include "main.h"

/**
 *
 * fizz_buzz - wwwwwwww
 *
 * Description: WWWWWWW
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else 
			printf("%d", i);

		printf(" ");
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
