#include "main.h"

/**
 *leet - encodes string
 *@str: string given to encoded
 *Return: encoded string
 */

char *leet(char *str)
{
int i = 0;
int j;
char codes[] = "aAeEoOtTlL";
char change[] = "4433007711";
for (; str[i] != '\0'; i++)
{
for (j = 0; j < 11; j++)
{
if (str[i] == codes[j])
{
str[i] = change[j];
}
}
}
return (str);
}
