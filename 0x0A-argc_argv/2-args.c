#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments of a program inlcuding its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
