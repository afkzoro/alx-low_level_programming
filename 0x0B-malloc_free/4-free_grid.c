#include "main.h"
#include <stdlib.h>

/**
	* free_grid - Uses the free() function to free the memory allocated to grid
	* @grid: grid considered
	* @height: height of grid
	* Return: nothing
	*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
