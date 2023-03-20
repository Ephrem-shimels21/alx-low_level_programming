#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds the integer arguments of a program
 * @argc: number of arguments
 * @argv: array of argments
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
