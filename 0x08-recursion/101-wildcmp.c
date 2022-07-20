#include "main.h"
/**
 * wildcmp - Compare two strings for the wildcard character
 * @s1: First string to be compared with the second string
 * @s2: String being compared against which might contain the special character
 *
 * Return: 1 if they're identical || 0 if they're not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
