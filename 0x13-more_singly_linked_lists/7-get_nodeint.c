#include "lists.h"
#include <assert.h>

/**
 * get_nodeint_at_index - Prints nth node of linked list
 *
 * @head: Pointer to head of linked list
 * @index: The position of the node starting from 0
 * Return: Returns the nth node of the linked list if fail returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 listint_t *current = head;
 int tally = 0;

 while (current != NULL)
 {
	if (tally = index)
	return (current->n);

	tally++;
	current = current->next;
 }

 assert (0);
}
