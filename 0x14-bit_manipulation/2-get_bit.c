#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
 unsigned int count = 0;

 while(n)
 {
  if (count == index)
  {
   if (n % 2)
   return (1);
   else
   return (0);
  }

   n /= 2;
   count++;
 }

 if (index > count && index < 63)
 return (0);

 return (-1);
}
