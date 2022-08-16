#include "main.h"

void print_binary(unsigned long int n)
{
 if(n == 0)
 {
  putchar('0');
  return;
 }


 recursiveDiv(n);
}

void recursiveDiv(unsigned long int n)
{
 if(n < 1)
 return;

 recursiveDiv(n / 2);

 if (n & 1)
 putchar ('1');
 else
 putchar('0');
}
