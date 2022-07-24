#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Duplicates a string
	* @str: The pointer to the string to duplicate
 *
	*Return: Duplictaed string
 */
char *_strdup(char *str)
{
	char *b;
	unsigned int i, j;

	i = 0, j = 1;

	if (str == NULL)
	return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	b = malloc(j * sizeof(char) + 1);

	if (b == NULL)
	return (NULL);

	while (i < j)
	{
		b[i] = str[i];
		i++;
	}

	b[i] = '\0';
	return (b);
}
