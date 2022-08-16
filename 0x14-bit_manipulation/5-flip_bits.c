#include "main.h"

int countbit(unsigned int long a)
{
 int count = 0;
 while (a > 0)
 {
  count++;
  a &= (a - 1);
 }
 return count;
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
 return countbit(n ^ m);
}
