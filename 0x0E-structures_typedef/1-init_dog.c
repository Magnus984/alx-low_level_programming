#include "dog.h"

/**
 * init_dog - initializes struct
 * @d: pointer to memory location
 * @name: string of name
 * @age: age
 * @owner: string of owner
 *
 * Return: no return value
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
