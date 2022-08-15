#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints number of elements in the linked list
 *
 * @h: Pointer to head of linked list
 * Return: total count of elements by using recursion
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

