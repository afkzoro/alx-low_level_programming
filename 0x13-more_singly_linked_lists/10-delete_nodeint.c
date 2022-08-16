#include "lists.h"

/**
	* delete_nodeint_at_index - Deletes a node at a given position
	*
	* @head: Pointer to head of singly linked list
	* @index: The position of the node to be deleted(starts at 0)
	* Return: Returns 1 if successful || -1 if failed
	*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *next;
	temp = *head;

	if (head)
	{
		while (*head != NULL)
		{
			if (index == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}

			for (count = 1; temp != NULL && count < index - 1; count++)
			{
				temp = temp->next;
			}
			if (temp == NULL || temp->next == NULL)
			return (0);
			next = temp->next->next;

			free(temp->next);
			temp->next = next;
		}
	}

	return (-1);
}
