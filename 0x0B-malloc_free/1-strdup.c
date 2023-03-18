#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the given string
 * Return: a pointer to new allocated space
 */

char *_strdup(char *str)
{
	char *cpy;

	cpy = malloc(strlen(str) + 1);
	if (cpy != NULL)
	{
		cpy = str;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (cpy);
	}
}
