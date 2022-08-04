#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
	* print_char - Prints character
	*
	* @c: ...
	*/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
	* print_int - Prints integer
	*
	* @i: ...
	*/
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
	* print_float - Prints a float
	*
	* @f: ...
	*/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
	* print_str - Print a string
	*
	* @s: ...
	*/
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
		printf("%s", str);
		return;
	}

	printf("%s", str);
}

/**
	* print_all - Prints all listed data types
	*
	* @format: List of types of argument passed to the function
	* ... - List of argument variables
	*/
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep;
	va_list args;
	l_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].check)
			{
				printf("%s", sep);
				types[j].f(args, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
