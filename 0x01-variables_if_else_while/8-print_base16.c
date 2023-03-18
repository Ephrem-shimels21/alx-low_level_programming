#include<stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: always 0
 */

int main(void)
{

	int i;
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

