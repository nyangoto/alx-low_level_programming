#include "lists.h"
/**
  * sum_listint - returns sum of al data(n) of a linked list file.
  * @head: pointer to first elemennt on list
  *
  * Return: SUM or NULL if list is empty.
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
