#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a list
 *
 * @h: pointer to linked list
 * Return: Returns the calculated number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; num++)
	{
		if ((*h).str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", (*h).len, (*h).str);

		h = (*h).next;
	}

	return (num);
}
