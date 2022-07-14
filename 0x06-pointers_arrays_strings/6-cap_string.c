#include "main.h"
#include <stdio.h>

/**
 * cap_string - ....
 * @x: ...
 *
 * Return: character value
 */
char *cap_string(char *x)
{
	int a = 0, i;
	int spa = 13;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (x[a])
	{
		i = 0;
		while (i < spa)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}
