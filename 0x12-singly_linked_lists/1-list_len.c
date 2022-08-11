#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; num++)
	{
		h = (*h).next;
	}

	return (num);
}
