#include "lists.h"

/**
	* dlistint_len - To calculate the number of nodes
	*
	* @h: Pointer to double linked list
	* Return: The number of nodes in the given double linked list
	*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}
