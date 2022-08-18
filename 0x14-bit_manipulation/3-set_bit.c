#include "main.h"

/**
	* set_bit - sets the bit object to 1 at a given index
	*
	* @n: Pointer to integers
	* @index: Position of the bit considered
	* Return: 1 if successful || -1 if failed
	*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
	return (-1);

	*n = *n | (1 << index);
	return (1);
}
