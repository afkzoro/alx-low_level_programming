#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array
 * @a: An array of integers
 * @n: Number of elements to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, i, temp, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
	}
}
