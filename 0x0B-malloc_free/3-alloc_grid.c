#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - create two dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		arr[j] = malloc(width * sizeof(int));

		if (arr[j] == NULL)
		{
			for (j--; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
