#include "main.h"

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
