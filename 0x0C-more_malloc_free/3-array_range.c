#include "main.h"
#include <stdlib.h>

/**
	* array_range - Creates array containing values from mininum to maximux both included
	* @min: Minimum value
	* @max: Maximum value
	*
	* Return: Returns pointer to new array || returns NULL if malloc fails
	*/
int *array_range(int min, int max)
{
	int *arr, b = 0;

	if (min > max)
	return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
	return (NULL);
	for (;min <= max; b++)
	{
		min++;
	}

	return (arr);
}
