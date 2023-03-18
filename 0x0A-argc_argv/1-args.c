#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc:  number of arguments
 * @argv:  array of arguments
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
