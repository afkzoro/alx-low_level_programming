#include "main.h"

/**
  * _strlen_recursion - Returns length of string
  * @s: the string considered
  *
  * Return: integer value
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
