#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 * @grid: this is the array of pointer to array of ints
 * @height: this is the number of arrays of pointers to ints
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	free(grid);
	}
}
