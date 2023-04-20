#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * numberOfWords - count number of words in given string sentence
 *
 * @str: sentence string
 * Return: number of words
 */

int numberOfWords(char *str)
{
	int sum = 0;
	int i;

	for (i = 1; i < strlen(str); i++)
	{
		if ((str[i] == 32 || str[i] == '\0') && str[i-1] != 32)
		{
			sum += 1;
		}
	}
	return (sum);
}

/**
 * strtow - returns a ponter to an array of strings
 * @str: unbroken string
 * Return: pointer to an array
 */


