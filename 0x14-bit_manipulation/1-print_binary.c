#include "main.h"
#include <unistd.h>

/**
	* recursiveDiv - Performs recursive division
	*
	* @n: integer to convert to binary representation
	* Return: Nothing.
	*/

void recursiveDiv(unsigned long int n)
{
	if (n < 1)
	return;

	recursiveDiv(n >> 1);

	if (n & 1)
	_putchar('1');
	else
	_putchar('0');
}

/**
	* print_binary - prints the binary representation of a number
	*
	* @n: integer to convert to binary representation
	* Return: Nothing.
	*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
	_putchar('0');
	return;
	}

	recursiveDiv(n);
}
