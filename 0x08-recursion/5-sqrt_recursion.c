#include "main.h"

/**
 * sqrtt - finds square root of a number
 * @n: number
 *@j: numbers less thatn n
 * Return: integer
 */

int sqrtt(int n, int j)
{
if (n < 0)
return (-1);
if (j * j > n)
{
return (-1);
}
else if (j * j == n)
{
return (j);
}
return (sqrtt(n, j + 1));
}

/**
 *_sqrt_recursion - finds the natural square root of a number
 *@n: number whose square root is going to find
 *Return: integer
 */
int _sqrt_recursion(int n)
{
return (sqrtt(n, 1));
}
