#include<stdio.h>
#include<string.h>

/**
 *puts_half - prints second half
 *
 *@str:parameter for the string
 *
 * Return:nothing
 */

void puts_half(char *str)
{
unsigned long i = strlen(str) / 2;
unsigned long j = (strlen(str)) / 2;
if (strlen(str) % 2 == 0)
{
for (; i < strlen(str); i++)
{
printf("%c", str[i]);
}
printf("\n");
}
else if (strlen(str) % 2 != 0)
{
for (j = j + 1; j < strlen(str); j++)
{
printf("%c", str[j]);
}
printf("\n");
}
}
