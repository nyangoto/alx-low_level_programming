#include "lists.h"
/**
  * add_nodeint-end - adds new node at end of list.
  * @head: pointer to pointer of 1st element of list.
  * @n: elememnt to be added on list.
  *
  * Return: address of new elemt otherwise NULL
  * if it fials.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *last_nodeint;

	new_nodeint = malloc(sizeof(listint_t));
	/* checks if malloc has been initialized */
	if (new_nodeint == NULL)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	/* assign new node if head is a null pointer */

	if (*head == NULL)
		*head = new_nodeint;

	else
	{
		last_nodeint = *head;

		while (last_nodeint->next != NULL)
			last_nodeint = last_nodeint->next;

		last_nodeint->next = new_nodeint;
	}

	return (new_nodeint);
}
