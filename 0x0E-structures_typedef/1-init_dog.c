#include <stdio.h>
#include "dog.h"

/**
 * init_dog - WWWWWWWWWW
 * @d: WWWWWWWWW
 * @name: WWWWWWWWW
 * @age: WWWWWWWWWWW
 * @owner: WWWWWWWWWW
 * Description: WWWWWWWWWWWW
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
