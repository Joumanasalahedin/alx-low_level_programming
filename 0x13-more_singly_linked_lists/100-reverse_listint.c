#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: double pointer to head of the list
  * Return: reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		temp = current->next;
		temp = current;
	}
	*head = current;

	return (*head);
}
