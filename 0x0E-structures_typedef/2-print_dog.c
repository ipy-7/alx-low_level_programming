#include <stdio.h>
#include "dog.h"

/**
 * print_dog - WWWWWWWWWW
 * @d: WWWWWWWWW
 * Description: WWWWWWWWWWWW
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
	if (d->age == 0.0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
