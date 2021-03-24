#include "lists.h"
/**
  * listint_len - returns numbr of elements in a
  * linked listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elements in list
  */
size_t listint_len(const listint_t *h)
{
	/* i is counter variable */
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
