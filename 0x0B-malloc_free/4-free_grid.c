#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid
 * @height: heigh of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int temp;

	for (temp = 0; temp < height; temp++)
	{
		free(grid[temp]);
	}
	free(grid);
}
