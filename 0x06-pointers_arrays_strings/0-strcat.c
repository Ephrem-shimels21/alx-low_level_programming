#include "main.h"
#include<stdio.h>

/**
 *_strcat - concatanates two strings
 *@dest:pointer where the other string is concatnated
 *@src: pointer which is concatnated to dest
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int k = 0;

for (; dest[i] != '\0'; i++)
;

for (; src[k] != '\0'; k++)
{
dest[i] = src[k];
i++;
}
if (dest[i - 1] != '\0')
{
dest[i] = '\0';
}
return (dest);
}
