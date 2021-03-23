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
	// i is counter variable
	int i;
	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
