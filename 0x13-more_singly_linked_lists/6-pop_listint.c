#include "lists.h"
/**
  * pop_listint - deletes head node of a listint_t list
  * @head: poinetr to pointer of head node.
  *
  * Return: 0 if list is empty.
  * rather headnode data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rem = 0;

	if (*head == NULL)
		return (rem);

	temp = *head;
	rem = temp->n;

	/* initialize head pointer to the next element */
	*head = (*head)->next;
	free(temp);

	return (rem);
}
