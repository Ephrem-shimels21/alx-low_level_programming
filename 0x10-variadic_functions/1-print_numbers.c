#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: a separator which separates numbers
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{

		int num = va_arg(var,  int);

		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(var);
	printf("\n");
}
