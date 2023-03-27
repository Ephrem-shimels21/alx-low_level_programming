#include "dog.h"
#include <stdlib.h>

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
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
}
