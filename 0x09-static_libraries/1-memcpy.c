#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: where n bytes are copied to
 * @src: where n bytes are comes from
 * @n: the number which tells how many bytes are to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
