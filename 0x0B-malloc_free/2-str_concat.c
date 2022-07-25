#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
	* str_concat - Concatenates two strings together
	* @s1: First string
	* @s2: Second string
	* Return: New string formed from string 1 and string 2 || NULL if failure
	*/
char *str_concat(char *s1, char *s2)
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

	a = slen1 + slen2;
	s = malloc((a + sizeof(char)));

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
