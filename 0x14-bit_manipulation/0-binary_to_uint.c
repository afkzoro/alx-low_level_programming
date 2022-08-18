#include "main.h"

/**
	* binary_to_uint - Function to convert a binary to an unsigned int
	*
	* @b: Pointer to a string of 0 and 1 chars
	* Return: Unsigned integers of a binary
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int i = 0;

	int c;
	unsigned int len;

	len = _strlen(b);

	if (b == NULL)
	return (0);

	for (c = --len;c >= 0; c--)
	{
	if (b[c] != '0' && b[c] != '1')
	return (0);

	if (b[c] == '1')
	{
		i += base;
	}

	base *= 2;
	}

	return (i);
}

/**
	* _strlen - Gives the length of a string
	* @s: The string considered
	*
	* Return: String length
	*/
int _strlen(const char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
