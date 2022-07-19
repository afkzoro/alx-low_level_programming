#include "main.h"
#include <stdio.h>

int detect_prime(int n, int i);

/**
  * is_prime_number - Returns if integer is a prime number
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (detect_prime(n, 1));
}

/**
  * detect_prime - Check if integer is a prime number
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 if otherwise
  */
int detect_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (detect_prime(n, i + 1));
}
