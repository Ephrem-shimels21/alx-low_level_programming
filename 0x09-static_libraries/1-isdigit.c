#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a given digit is between 0 and 9
 * @c: given digit
 * Return: intger
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

