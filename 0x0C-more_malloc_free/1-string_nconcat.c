#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
	* string_nconcat -
	*
	* @s1:
	* @s2:
	* @n
	* @return char*
	*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int a  = 0, b = 0, slen1 = 0, slen2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[slen1])
	slen1++;

	while (s2[slen2])
	slen2++;

	if (n >= slen2)
	a = slen1 + slen2;
	else
	a = slen1 + n;

	s = malloc((a * sizeof(char) + 1));

	if (s == NULL)
	return (NULL);

	slen2 = 0;

	while (b < a)
	{
		if (b <= slen1)
		s[b] = s1[b];

	if (b >= slen1)
	{
		s[b] = s2[slen2];
		slen2++;
	}

	b++;
	}

	s[b] = '\0';
	return (s);
}
