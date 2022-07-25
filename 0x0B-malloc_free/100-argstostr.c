#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
	* argstostr - Converts the parameters passed to the string
	* @ac: Argument count
	* @av: Argument vector
	* Return: returns pointer to string
	*/
char *argstostr(int ac, char **av)
{
	int cnt = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av  == NULL)
	return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			cnt++;
			b++;
		}

		b = 0;
		a++;
	}

	s = malloc(1 + ac + (sizeof(char) * cnt));

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}

		s[c] = '\n';

		b = 0;
		c++;
		a++;
	}

	c++;
	s[c] = '\0';
	return (s);
}
