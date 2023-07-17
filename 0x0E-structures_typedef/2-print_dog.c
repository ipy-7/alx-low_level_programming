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
	printf("Age: %s", (d->age != NULL ? d->age : "(nil)"));
	printf("Owner: %s", (d->owner != NULL ? d->owner : "(nil)"));
}
