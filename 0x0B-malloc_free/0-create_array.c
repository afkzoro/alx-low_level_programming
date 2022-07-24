#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Function that creates an array of characters
 * @size: Size of the array
	* @c: The characters to fill up the array\
 *
	* Return: An array of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
	return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}

	return (b);
}
