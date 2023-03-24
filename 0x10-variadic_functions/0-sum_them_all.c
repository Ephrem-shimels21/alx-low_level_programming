#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the summ of all its parameters
 * @n: the first unsigned integer parameter
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va1;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(va1, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va1, unsigned int);
	}
	va_end(va1);
	return (sum);
}
