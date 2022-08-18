#include "main.h"
#include <unistd.h>

/**
	* _putchar - writes character c to stdout
	* @c: character
	* Return: on success 1
	*
	*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

	recursiveDiv(n / 2);

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
