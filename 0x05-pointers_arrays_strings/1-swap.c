#include "main.h"

/**
 * swap_int - Swaps two integers
 *
 * @a: first integer to swap
 * @b: second interger to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
