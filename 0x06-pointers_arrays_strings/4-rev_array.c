#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
