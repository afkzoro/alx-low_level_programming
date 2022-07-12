#include "main.h"

/**
 * puts2 - Prints every character of a string
 * @str: String considered
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar(10);
}
