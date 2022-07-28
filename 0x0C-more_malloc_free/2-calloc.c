#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of n member elements
 * @nmemb: Number of members
	* @size: Size in bytes of array
	* Return: Returns pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a, b;
	char *arr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	b = nmemb * size;
	arr = malloc(b);

	if (arr == NULL)
	return (NULL);

	for (a = 0; a < b; a++)
	{
		arr[a] = 0;
	}

	return (arr);
}
