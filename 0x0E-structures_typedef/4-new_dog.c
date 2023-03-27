#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new object (i.e dog)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

     	strcpy(p->name = name);
	p->age = age;
	strcpy(p->owner = owner);

	return (p);
}
