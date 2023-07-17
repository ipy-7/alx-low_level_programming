#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - WWWWWWWWWW
 * @name: WWWWWWWWW
 * @age: WWWWWWW
 * @owner: WWWWWWW
 * Description: WWWWWWWWWWWW
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCpy, *ownerCpy;
	unsigned int i;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	nameCpy = malloc(strlen(name) + 1);
	ownerCpy = malloc(strlen(owner) + 1);

	if (d == NULL)
		return (NULL);

	if (nameCpy == NULL)
	{
		free(d);
		return (NULL);
	}

	if (ownerCpy == NULL)
	{
		free(d);
		free(nameCpy);
		return (NULL);
	}

	for (i = 0; i <= strlen(name); i++)
	{
		nameCpy[i] = name[i];
	}

	for (i = 0; i <= strlen(owner); i++)
	{
		ownerCpy[i] = owner[i];
	}

	d->name = nameCpy;
	d->age = age;
	d->owner = ownerCpy;
	return (d);
}
