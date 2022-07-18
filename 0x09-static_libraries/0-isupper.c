#include "main.h"

/**
 * _isupper - Check for uppercase
 * @c: Range
 *
 * Return: Could be 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
