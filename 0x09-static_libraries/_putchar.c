#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character c to stdout
 *
 * Return: on success 1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
