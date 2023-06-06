#include "lists.h"

/**
  * sum_listint - returns sum of all the data (n) of a linked list
  * @head: pointer to the head of the list
  * Return: sum of all the data
  */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
