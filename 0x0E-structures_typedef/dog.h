#ifndef DOG_H
#define DOG_H
/**
 * struct dog - WWWWWWWWWWW
 * @name: WWWWWWWWW
 * @age: WWWWWWWWWW
 * @owner: WWWWWWWWWWW
 *
 * Description: WWWWWWWW
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
