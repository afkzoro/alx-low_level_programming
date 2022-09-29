#include "lists.h"
/**
 * sum_dlistint - . . ... .
 *
 * @head: ......
 * Return: .....
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int add = 0;

	if (head)
	{
		while (current_node != NULL)
		{
			add += (*current_node).n;
			current_node = current_node->next;
		}
	}

	return (add);
}
