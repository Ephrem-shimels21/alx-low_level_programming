#include "main.h"

/**
 * rot13 - encodes a sentence
 * @s: given string
 * Return: string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j]!= '\0'; j++)
		{
			if (s[i] - 65 > 25 && s[i] == letters[j])
			{
				s[i] = storel[s[i] - 97];
			}
		      s[i] = storeh[s[i] - 65];
		}
	}
	return (s);
}
