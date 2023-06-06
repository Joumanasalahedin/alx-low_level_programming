#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index of a linked list
  * @head: pointer to head of the list
  * @index: index of the node that should be deleted
  * Return: 1 if success, -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (count == index)
	{
		previous->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}
