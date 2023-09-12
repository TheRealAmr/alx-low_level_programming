#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 *
 * @d: pointer to struct type dog
 * @name: pointer to char name dog
 * @age: age dog
 * @owner: pointer to char owner dog
 *
 * Return: no returns
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
