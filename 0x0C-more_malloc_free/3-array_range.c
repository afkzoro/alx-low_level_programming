#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arra of integers from min to max
 * @min: First value of the array
 * @max: last value of the array
 * Return: NULL if function fails, pointer to the newly created array if sucess
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
