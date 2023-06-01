#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: double pointer to the head of the linked list
  * @str: string
  * Return: address of the new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
