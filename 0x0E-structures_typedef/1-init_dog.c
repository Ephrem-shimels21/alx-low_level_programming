#include "dog.h"

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

	if (d == NULL)
		return (NULL);
	d.name = name;
	d.age = age;
	d.owner = owner;
}
