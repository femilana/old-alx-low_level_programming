#include <stdlib.h>
#include "dog.h"


/**
* new_dog -new dog
* @name:name
* @age:age
* @owner:owner
*Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1, len2, num;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (len1 = 0; name[len1]; len1++)
		len1++;


	dog->name = malloc(len1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (num = 0; num < len1; num++)
		dog->name[num] = name[num];

	dog->age = age;

	for (len2 = 0; owner[len2]; len2++)
		len2++;

	dog->owner = malloc(len2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (num = 0; num < len2; num++)
		dog->owner[num] = owner[num];
	return (dog);
}
