#include "main.h"

unsigned int binary_to_uint(const char *b)
{
 unsigned int base = 1;
 unsigned int i = 0;
 int c;
 unsigned int len;

 len = strlen(b);

 if (b == NULL)
 return (0);

 for (c = --len;c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
  return (0);

  if (b[c] == '1')
  {
   i += base;
  }

  base *= 2;
 }

 return (i);
}
