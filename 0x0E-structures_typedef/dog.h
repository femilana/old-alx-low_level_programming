#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * Struct dog - dog info
 * @name: first info
 * @age: secound info
 * @owner: last info
 *
 * Description: this struct represents information about a dog
 */


struct dog
{
	char *name;
	float age;
	char owner;

	return (0);
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
