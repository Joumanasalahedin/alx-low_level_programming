#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to head of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
