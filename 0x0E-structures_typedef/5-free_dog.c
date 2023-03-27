#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: pointer of type dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
