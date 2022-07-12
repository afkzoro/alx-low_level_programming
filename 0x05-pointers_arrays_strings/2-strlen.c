#include "main.h"

/**
 * _strlen - Gives the length of a string
 * @s: The string considered
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
