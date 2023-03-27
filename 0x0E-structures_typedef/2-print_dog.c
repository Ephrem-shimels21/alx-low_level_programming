#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog -prints struct dog
 * @d: pointer to the struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name:%s\n Age:%f\n Owner:%s", d->name, d->age, d->owner);
}
