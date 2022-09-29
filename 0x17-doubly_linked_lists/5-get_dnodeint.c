#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at an index from a list
 *
 * @head: Pointer to head of double list
 * @index: Index of node
 * Return: The node of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	if (head)
	{
		for (; current_node != NULL; i++)
		{
			if (i == index)
				return (current_node);

			current_node = current_node->next;
		}
	}

	return (NULL);
}
