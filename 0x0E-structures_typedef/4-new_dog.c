#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a pointer to structure in memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *struct_ptr;

	struct_ptr = malloc(sizeof(dog_t));
	if (!struct_ptr)
		return (NULL);
	struct_ptr->name = name;
	struct_ptr->age = age;
	struct_ptr->owner = owner;
	return (struct_ptr);
}
