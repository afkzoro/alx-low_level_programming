#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 listint_t *current, *new_node;
	unsigned int tally = 1;

	if (head)
	{
		new_node = mallloc(sizeof(listint_t));
		if (new_node == NULL)
		return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			current = *head;
			for (; current != NULL; tally++)
			{
				if (tally == idx)
				{
					new_node->next = current->next;
					current->next = new_node;
					return (new_node);
				}
				current = current->next;
			}
			if (idx > tally)
			return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}