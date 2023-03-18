#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a string where a new byte place on
 * @b: a new which going to be put on 's'
 * @n: the number of bytes to be filled
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
