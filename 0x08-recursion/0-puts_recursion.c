#include "main.h"

/**
  * _puts_recursion - Prints a string followed by a new line
  * @s: String considered
  *
  * Return: Empty
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
