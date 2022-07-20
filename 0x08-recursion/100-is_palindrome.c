#include "main.h"
int _strlen_recursion(char *s);
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
int detect_palindrome(int len, char *s, int i);
/**
  * detect_palindrome - Check if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int detect_palindrome(int len, char *s, int i)
{
	if (s[i] != s[len - 1])
	return (0);
	if (i == len)
	return (1);
	return (detect_palindrome(len, s, i +1));
}
/**
  * is_palindrome - Returns 1 if the string is a palindrome
  * @s: the string to be checked
  *
  * Return: 1 if its a palindrome and 0 if otherwise
  */
	int is_palindrome(char *s)
	{
		if (*s == '\0')
		return (1);
		return (detect_palindrome(_strlen_recursion(s) - 1, s, 0));
	}
