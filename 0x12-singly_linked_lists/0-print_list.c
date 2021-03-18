iinclude "lists.h"

/**
  * print_list - prints all elemets of a list_t list.
  * @h: pointer to list.
  *
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	/* 'i' is thecounter variable */
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
