#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: head of the list
  * Return: head node's data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data = current->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(current);
	return (data);
}
