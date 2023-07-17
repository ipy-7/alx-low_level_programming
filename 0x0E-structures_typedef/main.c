#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *d;

	d = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", d->name, d->age);
	return (0);
}
