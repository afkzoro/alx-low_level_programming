#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
		* add_node_end - Adds a new node at the end of a list
		* @head: the pointer to the head of the list
		* @str: New string added to the linked list
		*
		* Return: The address of the new list or NULL if str == NULL
		*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_list, *aux;

	if (str != NULL)
	{
		n_list = malloc(sizeof(list_t));
		if (n_list == NULL)
			return (NULL);

		(*n_list).str = strdup(str);
		(*n_list).len = _strlen(str);
		(*n_list).next = NULL;

		if (*head == NULL)
		{
			*head  = n_list;
			return (*head);
		}
		else
		{
			aux = *head;
			while (aux->next)
				aux = (*aux).next;

			(*aux).next = n_list;
			return (aux);
		}
	}

	return (NULL);
}

/**
	* _strlen - Gives the length of a string
	* @s: The string considered
	*
	* Return: String length
	*/
int _strlen(const char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
