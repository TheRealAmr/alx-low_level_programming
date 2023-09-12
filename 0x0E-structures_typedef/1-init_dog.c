#include "dog.h"

/**
 * init_dog - initializes the dog
 * @d: pointer to struct type dog
 * @name: dog's name
 * @age: age's dog
 * @owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
