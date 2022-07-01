#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar((ch % 10) + '0');

	putchar('\n');

	return (0);
}
