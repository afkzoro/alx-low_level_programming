#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		int ch1;

		for (ch1 = ch + 1; ch1 < 9; ch1++)
		{
			int ch2;

			for (ch2 = ch1 + 1; ch2 < 10; ch2++)
			{
				putchar((ch % 10) + '0');
				putchar((ch1 % 10) + '0');
				putchar((ch2 % 10) + '0');

				if (ch != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}
}
