#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * dog_t  - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure that stores information
 * about some dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: structure that stores name, age,
 * name of owner of some dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
