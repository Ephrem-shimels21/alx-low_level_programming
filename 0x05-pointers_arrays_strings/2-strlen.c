#include<stdio.h>

/**
 *_strlen - finds the length of the given string
 *
 *@s:pointer to the string
 *
 *Return: int
 */
int _strlen(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i] != 0)
	{
		l += 1;
		i += 1;
	}
	return (l);
}
