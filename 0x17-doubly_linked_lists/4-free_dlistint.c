#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to head of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;
	dlistint_t *prev;

	while (current != NULL)
	{
		next = current->next;
		prev = current->prev;
		free(current);
		current = next;
	}
}
