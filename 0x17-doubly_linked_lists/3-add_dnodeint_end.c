#include "lists.h"

/**
  * add_dnodeint_end - adds new node at end of doubly linked list.
  * @head: double pointer to list.
  * @n: New node.
  *
  * Return: address to new element or NULL.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node, *last;

	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new_Node;
		new_Node->prev = last;
	}
	return (new_Node);
}
