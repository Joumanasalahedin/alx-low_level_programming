#include "lists.h"

/**
  * list_len - number of elements in a linked list_t list
  * @h: pointer to head of the linked list
  * Return: numbers of elements
  */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
