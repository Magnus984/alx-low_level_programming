#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to structure
 * @name: name element
 * @age: age element
 * @owner: owner element
 *
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
