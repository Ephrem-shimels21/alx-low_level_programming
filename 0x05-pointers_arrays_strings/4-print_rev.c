#include<stdio.h>
#include<string.h>

/**
 * print_rev - reverses a string
 *
 * @s: parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
