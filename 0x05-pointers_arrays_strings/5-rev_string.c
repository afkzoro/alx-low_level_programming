#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char temp;

	j = 0;
	k = 0;

	while (s[j] != '\0')
		j++;

	k = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k -= 1;
	}
}
