#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
	* add_node - Adds anode to the = beginning of a linked list
	*
	* @head: The pointer to the head of the linked list
	* @str: the string to add to the linked list
	* Return: returns address of new list or NULL if head = NULL
	*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux;

	if (head != NULL && str != NULL)
	{
		aux = malloc(sizeof(size_t));
		if (aux == NULL)
		return (NULL);

		(*aux).str = strdup(str);
		(*aux).len = _strlen(str);
		(*aux).next = *head;

		*head = aux;

		return (aux);
	}

	return (0);
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
