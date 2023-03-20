#include<stdio.h>
#include<string.h>

/**
 * rev_string - reverses a string
 *
 * @s: parameter for the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j = strlen(s) - 1;
	int mid = strlen(s) / 2;
	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}

}
