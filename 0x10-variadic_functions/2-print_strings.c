#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
	* print_strings - Prints a string
	*
	* @seperator: The comma character
	* @n: Number of strings
	* ... - List of variables passed
	* Return - Nothing.
	*/
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, a;
	char *str;

	a = n - 1;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
			printf("%s", "(nil)");
			else
			printf("%s", str);

			if (i != a && seperator != NULL)
			printf("%s", seperator);
			}

			va_end(args);
	}
	putchar(10);
}
