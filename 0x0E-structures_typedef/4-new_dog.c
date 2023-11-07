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
	int name_len, owner_len, i;

	struct_ptr = malloc(sizeof(dog_t));
	if (!struct_ptr || !name || !owner)
	{
		free(struct_ptr);
		return (NULL);
	}
	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	struct_ptr->name = malloc(name_len + 1);
	struct_ptr->owner = malloc(owner_len + 1);
	if (!struct_ptr->name || !struct_ptr->owner)
	{
		free(struct_ptr->name);
		free(struct_ptr->owner);
		free(struct_ptr);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		struct_ptr->name[i] = name[i];
	struct_ptr->name[i] = '\0';
	struct_ptr->age = age;
	for (i = 0; i < owner_len; i++)
		struct_ptr->owner[i] = owner[i];
	struct_ptr->owner[i] = '\0';
	return (struct_ptr);
}
