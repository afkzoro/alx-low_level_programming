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
 int size;
 size = sizeof(unsigned long int) * 8;

 if (index > size)
 return (-1);

 return((*n |= 1 << index) ? 1 : -1);
}
