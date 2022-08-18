#include "main.h"

/**
	* binary_to_uint - Function to convert a binary to an unsigned int
	*
	* @b: Pointer to a string of 0 and 1 chars
	* Return: Unsigned integers of a binary
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 0, len = 0, i = 0;

	if (b == NULL)
	return (0);

	len = _strlen(b);

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
		return (0);

		if (b[len] == 49)
		i += 1 << base;

		base++;
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
