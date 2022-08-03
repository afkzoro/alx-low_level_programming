#include "function_pointers.h"
#include <stdlib.h>

/**
	* int_index - Searches for an integer
	*
	* @array: The array considered
	* @size: Number of elements in the array
	* @cmp: Pointer to the function used to compare
	* Return: Always -1
	*/
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i = 0;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}

	return (-1);
}
