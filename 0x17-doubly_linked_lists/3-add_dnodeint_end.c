#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a list
  * @head: double pointer to the head of list
  * @n: data of new node
  * Return: address of the new element
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}

	return (*head);
}
