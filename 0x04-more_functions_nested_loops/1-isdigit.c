#include "main.h"

/**
 * _isdigit - Check if its a number
 * @c: The number checked
 *
 * Return: Could be 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
