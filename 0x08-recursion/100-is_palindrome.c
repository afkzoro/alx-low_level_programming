#include "main.h"

int detect_palindrome(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (detect_palindrome(s));
}

/**
  * detect_palindrome - Check if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int detect_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (*s == s[len])
	{
		s++;
		len--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Returns length of string
  * @s: the string considered
  *
  * Return: the string length
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
