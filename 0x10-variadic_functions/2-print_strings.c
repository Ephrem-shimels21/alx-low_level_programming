#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator - string symbol which separates the strings
 * @n - number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		char *word = va_arg(var, char *);

		if (word == NULL)
		{
			printf("nil");
		}
		printf("%s", word);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
