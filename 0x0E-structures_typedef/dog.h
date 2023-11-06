#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - structure called dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: an object can be declared
 * of type struct dog and would inherit its
 * elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
