#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and intialize with a char
 * @size: The size of the array
 * @c: The char that is going intilize the array
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size);

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		return (arr);
	}
}
