#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
	* sum_them_all - Sums all arguments passed to the function
	*
	* @n: Number of arguments passed
	* ... - Varible list of arguments
	* Return: Sum of arguments
	*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum;
	int i;

	i = 0;

	if (n != 0)
	{
		va_start(args, n);

		for (; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}

	return (0);
}
