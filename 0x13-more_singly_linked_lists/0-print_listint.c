#include "lists.h"
/**
  * print_listint - print all elements os a listint_t list.
  * @h: pointer to first element in a list.
  *
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	/* i is counter variable */
	size_t i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
