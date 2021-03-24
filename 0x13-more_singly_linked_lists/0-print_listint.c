#include "lists.h"
/**
  * print_listint - print all elements os a listint_t list.
  * @h: pointer to first element in a list.
  *
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
