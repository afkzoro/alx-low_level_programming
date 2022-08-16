#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 listint_t *current, *new_node;
 current = *head;
 unsigned int tally = 0;

 if (head == NULL)
 return (NULL);
 if (current == NULL && idx != 0)
 return (NULL);

 new_node = (listint_t *)malloc(sizeof(listint_t));
 if (new_node == NULL)
 return (NULL);
 (*new_node).n = n;
 if (idx == 0)
 {
	(*new_node).next = *head;
	*head = new_node;
	return (new_node);
 }

 for(; tally != idx - 1; tally++)
 {
	current = (*current).next;
	if (current == NULL)
	{
		free (new_node);
		return (NULL);
	}
 }
 new_node->next = current->next;
 current->next = new_node;
 return (new_node);
}
