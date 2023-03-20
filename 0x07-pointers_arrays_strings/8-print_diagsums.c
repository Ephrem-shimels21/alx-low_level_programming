#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints the sums of the two digonals of a square matrix
 * @a: square matrix of integers
 * @size: size fo the matrix
 * Return: integers
 */

void print_diagsums(int *a, int size)
{
	int i;
	int left = 0;
	int right = 0;

	for (i = 0; i < size; i++)
	{
		left += *(a + (size * i + i));
		right += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", left, right);
}
