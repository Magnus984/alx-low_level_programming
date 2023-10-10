#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 *
 * Retrun: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int len_name = 0, len_owner = 0, i;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL || !(name) || !(owner))
	{
		free(nw_dog);
		return (NULL);
	}

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	nw_dog->name = (char *)malloc(len_name + 1);
	nw_dog->owner = (char *)malloc(len_owner + 1);

	if (!(nw_dog->name) || !(nw_dog->owner))
	{
		free(nw_dog->name);
		free(nw_dog->owner);
		free(nw_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		nw_dog->name[i] = name[i];
	nw_dog->name[len_name] = '\0';

	nw_dog->age = age;

	for (i = 0; i < len_owner; i++)
		nw_dog->owner[i] = owner[i];
	nw_dog->owner[len_owner] = '\0';

	return (nw_dog);
}

