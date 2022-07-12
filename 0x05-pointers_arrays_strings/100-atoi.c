#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The pointer considered
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ab = 0;
	int min = 1;
	int si = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			si = 1;
			ab = (ab * 10) + (s[a] - '0');
			a++;
		}

		if (si == 1)
		{
			break;
		}

		a++;
	}

	ab *= min;
	return (ab);
}
