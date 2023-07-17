#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog d;
	d.name = "WWWWW";
	d.age = 343.2;
	d.owner = NULL;
	print_dog(&d);

	return (0);
}
