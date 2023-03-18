#include<stdio.h>

/**
 * main - prints size of  different data types in c
 * Return: integer
 */

int main(void)
{
printf("Size of a char: ");
printf("%d", sizeof(char));
printf(" byte(s)\n");

printf("Size of an int: ");
printf("%d", sizeof(int));
printf(" byte(s)\n");

printf("Size of a long int: ");
printf("%d", sizeof(long int));
printf(" byte(s)\n");

printf("Size of a long long int: ");
printf("%d", sizeof(long long int));
printf(" byte(s)\n");

printf("Size of a float: ");
printf("%d", sizeof(float));
printf(" byte(s)\n");
return (0);
}
