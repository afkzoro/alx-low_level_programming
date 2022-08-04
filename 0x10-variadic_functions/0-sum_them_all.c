#include "variadic_functions.h"

/**
	* sum_them_all - Sums all arguments passed to the function
	* @n: Number of arguments passed
	* Return: Sum of arguments if condition is true
	*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	if(n == 0)
	return (0);
}
