#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
	* print_numbers - Prints numbers
	*
	* @seperator: The comma character
	* @n: Number of integers to print
	* ... - variable list of arguments
	* Return: Nothing
	*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, a;

	a = n - 1;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i != a && seperator != NULL)
			printf("%s", seperator);
		}
		va_end(args);
	}
	putchar(10);
}
