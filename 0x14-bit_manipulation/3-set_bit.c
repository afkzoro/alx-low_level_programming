#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
 int size;
 size = sizeof(unsigned long int) * 8;

 if (index > size)
 return (-1);

 return((*n |= 1 << index) ? 1 : -1);
}
