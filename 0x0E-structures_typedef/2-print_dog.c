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

	printf("Name: %s", (d->name != NULL ? d->name : "(nil)"));
	if (d->age == 0.0)
		printf("Age: %s", "(nil)");
	else
		printf("Age: %f", d->age);
	printf("Owner: %s", (d->owner != NULL ? d->owner : "(nil)"));
}
