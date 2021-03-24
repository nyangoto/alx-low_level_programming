#include "lists.h"
/**
  * add_node - adds new nod at beginning of listint_t list.
  * @head: pointer to pointer of first element.
  * @n: number of elements to be added.
  *
  * Return: address of new element or NULL.
  */
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;

	*head = temp;

	return (*head);
}
