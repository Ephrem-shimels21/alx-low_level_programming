#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: a number whose factorial is required
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
