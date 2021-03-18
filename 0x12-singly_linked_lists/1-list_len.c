#include "lists.h"

/**
  * list_len - returns number of elements in a linked list
  * @h: pointer to the list.
  *
  * Return: number of elements in a linked list_t list.
  */
size_t list_len(const list_t *h)
{
	/* i is counter variable */
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
