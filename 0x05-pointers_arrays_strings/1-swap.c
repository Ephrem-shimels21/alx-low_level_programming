#include<stdio.h>

/**
 *swap_int - function that swap the value of two variables
 *
 *
 * @a : parameter1
 *
 * @b : parameter2
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
