#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
	* alloc_grid -Prints a two-dimensional array
	* @width: WIdth of the array(lenght of columns stacked side by side)
	* @height: HEight of the array(lenght of rows stacked side by side)
	* Return: Pointer to the two-dimensional array
	*/
int **alloc_grid(int width, int height)
{
	int a, b, **grid;

	grid = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || grid == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == 0)
		{
			while (a--)
			free(grid[a]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		grid[a][b] = 0;
	}

	return (grid);
}
