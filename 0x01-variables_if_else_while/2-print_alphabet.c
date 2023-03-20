#include<stdio.h>
/**
 * main - prints lowercase letters
 *
 * Return: always 0
 */

int main(void)
{
	char lettr[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; lettr[i] != '\0'; i++)
	{
		putchar(lettr[i]);
	}
	putchar('\n');
	return (0);
}
