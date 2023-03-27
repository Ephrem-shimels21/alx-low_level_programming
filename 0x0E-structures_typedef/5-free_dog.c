#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: pointer of type dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
