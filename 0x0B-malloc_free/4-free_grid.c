#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees a 2 dimensional array that is previously created
 * @grid: pointer to the array
 * @height: the height of the array(rows)
 * Return:nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
