#include<stdio.h>

/**
* main - It prints the sentence stored at a variable strr
* Return:  1
*/

int main(void)
{
char *strr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while (i < 58)
{
putchar(strr[i]);
i++;
}
putchar('\n');
return (1);
}
