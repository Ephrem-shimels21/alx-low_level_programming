#include "function_pointers.h"
#include<stddef.h>

/**
 * print_name - prints a name
 * @name: string that is going to printed
 * @f: ponter to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
