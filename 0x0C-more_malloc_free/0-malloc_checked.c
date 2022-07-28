#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates memory
	* @b: Size of memeory allocated
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	exit(98);

	return (mem);
}
