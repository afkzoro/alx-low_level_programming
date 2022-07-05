#include <stdio.h>

/**
 * printFibonacciNumbers - fib numbers
 * @n: integer used
 *
 * main - Entry point
 * void
 * Return: Always 0 (Success)
 */
void printFibonacciNumbers(int n)
{
	int f1 = 1, f2 = 2, i;

	if (n < 1)
		return;
	printf("%d, ", f1);

	for (i = 1; i < n; i++)
	{
		printf("%d, ", f2);
		int next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printFibonacciNumbers(98);
	printf("\n")
	return (0);
}
