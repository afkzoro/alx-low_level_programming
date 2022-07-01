#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	char ch1;

	for (ch = 0; ch < 10; ch++)
		putchar((ch % 10) + '0');

	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
		putchar(ch1);
	putchar('\n');

	return (0);
}
