#include "lists.h"
/**
  * listint_len - returns number of elements in a listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elemnts in lst
  */
size_t listint_len(const listint_t *h)
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
	unsigned int count;

	current = head;
	count = listint(head);

	if (current == NULL)
		count++;

	if (count <= index)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (current != NULL)
		{
			if (count == index)
			{
				break;
			}
			else
			{
				count++;
				current = current->next;
			}
		}
		return (current);
	}
}
