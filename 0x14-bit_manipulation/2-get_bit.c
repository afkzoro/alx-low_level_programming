#include "main.h"

/**
 * get_bit - returns the value of a bit at a  given index
 *
 * @n: The integer considered
 * @index: The position of the bit starting from 0
 * Return: The bit value or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (n != 0)
	{
		if (count == index)
		{
			if (n % 2)
			return (1);
			else
			return (0);
		}

		n /= 2;
		count++;
	}

	if (index > count && index < 63)
	return (0);

	return (-1);
}
