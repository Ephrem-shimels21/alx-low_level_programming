#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialze a varible of type struct dog
 * @d:pointer for struct type
 * @name: pointer of string
 * @age: float type
 * @owner:string pointer
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	} else
		return;
}
