#include "main.h"

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