#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print each element of the array
 * @array: array of integers
 * @size: Size of the array
 * @action: function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
