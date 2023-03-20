#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialze a varible of type struct dog
 * @d:pointer for struct type
 * @name: pointer of string
 * @age: float type
 * @owner:string pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
