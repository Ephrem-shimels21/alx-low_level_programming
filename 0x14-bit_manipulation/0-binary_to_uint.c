#include "main.h"
#include "string.h"
#include "math.h"

/**
 * binary_to_uint - converts binary number ot an integer
 * @b: pointer to binary String
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	int len = strlen(b);

	for(i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			num = num + pow(2,len);
		}
		len = len - 1;
	}

	return (num);
}



