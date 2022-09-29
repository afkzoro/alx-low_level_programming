#include "lists.h"

/**
 * add_dnodeint - Adds a node to a double linked list
 *
 * @head: Pointer to head of double linked list
 * @n: The integer to set in the new node
 * Return: The head pointer of the double linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
