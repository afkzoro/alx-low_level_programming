#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = *head;
			*head = (*head)->next;
			free(aux);
		}
	}
	else
	return;

	free(*head);
	head = NULL;
}
