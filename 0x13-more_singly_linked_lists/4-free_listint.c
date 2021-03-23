#include "lists.h"
/**
  * freee_listint - frees a lisint -t lsit.
  * @head: pointer to first elemet
  *
  * Return: VOID
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
