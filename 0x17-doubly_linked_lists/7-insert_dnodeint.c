#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: double pointer to head of the list
  * @idx: index of the list where new node should be added
  * @n: node to be added
  * Return: adress of the new node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	dlistint_t *previous = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (count == idx)
	{
		previous->next = new_node;
		new_node->prev = previous;
		new_node->next = current;
		current->prev = new_node;

		return (new_node);
	}

	free(new_node);
	return (NULL);
}
