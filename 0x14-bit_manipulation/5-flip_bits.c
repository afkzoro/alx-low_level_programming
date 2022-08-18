#include "main.h"

/**
	* countbit - Counts the bits
	*
	* @a: Integer considered
	* Return: bit count
	*/
int countbit(unsigned int long a)
{
	int count = 0;

	while (a > 0)
	{
	count++;
	a &= (a - 1);
	}
	return (count);
}

/**
	* flip_bits - returns the number of bits you need to flip
	* to get from one number to another
	*
	* @n: FIrst param
	* @m: Second param
	* Return: bit count
	*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countbit(n ^ m));
}
