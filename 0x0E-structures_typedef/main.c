#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *d;

	d = new_dog("Poppy", 3.5, "Bob");

	return (0);
}
