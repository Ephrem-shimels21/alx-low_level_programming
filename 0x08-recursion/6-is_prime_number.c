#include "main.h"

/**
 * checker - checks whether n in prime or not
 * @n: number to be cheked
 * @i: factors
 * Return: integer:wq
 */

int checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	} else if (n % i == 0 && i < n)
	{
		return (0);
	}
	else if (n % i == 0 && i == n)
	{
		return (1);
	}
	return (checker(n, i + 1));
}

/**
 *is_prime_number - checks whether a number is prime or not
 * @n: number tobe checked
 * Return: either 0 or 1;
 */

int is_prime_number(int n)
{
	return (checker(n, 2));
}
