#include<stdio.h>

/**
 *puts2 - prints other
 *
 *@str: variable as parameter for string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	if (str[i] != '\0')
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
