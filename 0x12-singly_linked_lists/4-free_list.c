#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees up memory used up by linked list
 *
 * @head: pointer to the first node(head) of linked list
	* Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = (*head).next;
		free((*aux).str);
		free(aux);
	}

	free(head);
}
