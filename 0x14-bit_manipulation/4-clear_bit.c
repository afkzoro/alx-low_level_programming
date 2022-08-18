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
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
