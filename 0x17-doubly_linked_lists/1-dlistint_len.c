#include "lists.h"

/**
	* dlistint_len -
	*
	* @h: Pointer to double linked list
	* Return: The number of nodes in the given double linked list
	*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++len;
		h = h->next;
	}

	return (len);
}
