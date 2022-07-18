#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination
 * @src: Source
 * @n: Number of copies
 *
 * Return: Destination value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
