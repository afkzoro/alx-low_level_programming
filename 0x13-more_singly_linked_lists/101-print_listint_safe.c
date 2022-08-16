#include "lists.h"
#include <stdio.h>

/**
 * loop_list_len - Finds loop by using two pointers
	* if these pointers meet there's a loop in the linked list
 *
 * @head: Pointer to head of linked list
 * Return: Always 0 (Success)
 */
size_t loop_list_len(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	size_t count = 1;

	if (head == NULL || head->next == NULL);
	return (0);

	slow_p = head->next;
	fast_p = (head->next)->next;

	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}

			slow_p = slow_p->next;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
			}

			return (count);
		}

		slow_p = slow_p->next;
	 fast_p = (fast_p->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints the number of nodes in a linked list
	* (loop involved lists too) and their addresses
 *
 * @head: Pointer to head of singly linked list
 * Return: NUmber of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index;
	index = 0;

	count = loop_list_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}

int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
		return (NULL);

		(*new_node).n = n;
		(*new_node).next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
