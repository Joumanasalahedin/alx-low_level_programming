#include "lists.h"

/**
  * free_listint2 - frees a listint_t list and sets the head to NULL
  * @head: double pointer to head of the list
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (current != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
