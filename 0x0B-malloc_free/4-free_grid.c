#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free array
 * @grid: 2d grid
 * @distance: height dimension of the grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int distance)
{
	int num;

	for (num = 0; num < distance; num++)
	{
		free(grid[num]);
	}
	free(grid);
}
