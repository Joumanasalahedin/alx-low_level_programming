#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: double pointer to the head of the list
  * @str: string
  * Return: address of the new element or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	list_t *current;
	unsigned int length;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
		;

	new_node->str = dup_str;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
