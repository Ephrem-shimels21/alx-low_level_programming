#include "main.h"

/**
 *string_toupper - changes characters to upper case
 *@ptr: string whose characters to be chaged into upper cas
 *Return: string
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	for (; ptr[i] != '\0'; i++)
	{
		if (ptr[i] > 96 && ptr[i] < 123)
		{
			ptr[i] = ptr[i] - 32;

		}
	}
	return (ptr);
}

