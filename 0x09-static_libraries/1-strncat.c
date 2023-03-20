#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 *_strncat - concatenate strings only n characters
 *
 *@dest: destination pointer
 *@src: source pointer
 *@n: integer which specify how many number of chacaters should come from src
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	for (; dest[i] != '\0' ; i++)
		;

	for (; k < n; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
