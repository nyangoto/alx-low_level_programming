#include "lists.h"
/**
  * free_listint2 - frees list and sets head ro NULL
  * @head: pointer to pointer of first element in list.
  *
  * Return: VOID.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
