#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid
  * @grid: 2D grid
  * @height: height
  * Return: no return
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
