#include "main.h"

/**
 * string_toupper - Changes lowercase to uppercase
 * @p: The string to be modified
 *
 * Return: character variable
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
