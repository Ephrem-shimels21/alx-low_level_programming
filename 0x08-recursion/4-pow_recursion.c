#include "main.h"

/**
 * _pow_recursion - finds the value x raised to y
 * @x: The base integer
 * @y: The exponent
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
	{
		return (x);
	}
	y = y - 1;
	return (x * _pow_recursion(x, y));
}
