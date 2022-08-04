#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#define FORMAT(f) ("%"#f)
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct listTypes - Lists all types
 * @check: Identifies type
	* @f: Function
 */
typedef struct listTypes
{
	char *check;
	void (*f)();
} l_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
