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
	unsigned int i, sum;

	va_start(va1, n);

	for (i = va1; i < n; i = va_arg(va1, unsigned int))
	{
		sum += i;
	}
	va_end(va1);
	return (sum);
}
