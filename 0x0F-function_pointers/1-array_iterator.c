#include "function_pointers.h"
#include <stdlib.h>

/**
	* array_iterator - a function that executes a function
	* Given as a param on each element of an array
	* @array: The array considered
	* @size: Size of the array
	* @action: Pointer to function used
	* Return: Nothing
	*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
