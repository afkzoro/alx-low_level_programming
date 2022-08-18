#include "main.h"

/**
	* clear_bit - sets the bit value to zero at a given index
	*
	* @n: pointer to integer considered
	* @index: The position of the bit to set to zero
	* Return: returns 1 if successful or -1 if otherwise
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int size;

	size = sizeof(unsigned long int) * 8;

	while (index < size)
	{
		*n = *n & (~(1 << index));
		return (1);
	}

	return (-1);
}
