#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: Pointer to head of list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head, *next = NULL;

	while (current_node != NULL)
	{
		next = (*current_node).next;
		free(current_node);
		current_node = next;
	}
}
