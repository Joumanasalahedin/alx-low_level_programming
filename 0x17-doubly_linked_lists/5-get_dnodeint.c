#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a linked list
  * @head: pointer to head of the list
  * @index: chosen node
  * Return: nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
