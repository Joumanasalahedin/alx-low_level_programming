#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: double pointer to head of list
  * @idx: index of the list where the new node should be added
  * @n: new node data
  * Return: address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
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
		new_node->next = current;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
