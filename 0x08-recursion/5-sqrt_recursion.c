#include "main.h"
#include <stdio.h>

int _squart(int n, int i);

/**
  * _sqrt_recursion - Returns square root of a number
  * @n: number considered
  *
  * Return: The square root of the number
  */
int _sqrt_recursion(int n)
{
	return (_squart(n, 1));
}

/**
  * _squart - Calculates square root
  * @n: number considered
  * @i: iterate number
  *
  * Return: The natural square root of the number
  */
int _squart(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_squart(n, i + 1));
}
