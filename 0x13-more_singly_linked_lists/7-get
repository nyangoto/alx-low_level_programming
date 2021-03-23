#include "lists.h"
/**
  * listint_len - returns number of elements in a listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elemnts in lst
  */
size_t list_int_len(const listint_t *h)
{
	/* i  is coiunter var */
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
  * get_nodeint_at_index - returns Nth elemnt of linked list
  * @head: pointer to firts element
  * @index: node'sindex
  *
  * Return: Nth node otherwise NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	count = listint_len(head);

	if (current == NULL)
		i++;

	if (i <= index)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (current != NULL)
		{
			if (i == index)
			{
				break;
			}
			else
			{
				i++;
				current = current->next;
			}
		}
		return (current);
	}
}
