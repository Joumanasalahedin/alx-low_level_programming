#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index of a linked list
  * @head: double pointer to head of the list
  * @index: index to delete the node
  * Return: 1 (Success)
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
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
		if (current != NULL)
		{
			previous->next = current->next;
			if (current->next != NULL)
				current->prev = previous;
			free(current);
			return (1);
		}
	}

	return (-1);
}
