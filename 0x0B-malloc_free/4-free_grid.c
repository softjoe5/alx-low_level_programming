
#include "main.h"

/**
 * free_grid -> removing memory allocation
 * @grid: the multidimensional array
 * @height: height of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
