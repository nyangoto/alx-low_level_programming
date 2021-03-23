#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
  * struct listint_s - singly linked list.
  * @n: integer
  * @next: pointer to the next node.
  *
  *Description: singly linked list node structure & definition.
*/

  typedef struct listint_s
{
	int n;
	struct lint_s *next;
} listint_t;

/* Funtion prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint *h);
listint_t *add_nodeint(listint **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t *head);
listint *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint *reverse_listint(listint_t **head);

#endif /* LISTS_H */
