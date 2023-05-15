#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of string inputed
  * @str: string given as a parameter
  * Return: pointer
  */

char *_strdup(char *str)
{
	char *new;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc(sizeof(char) * (len + 1));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new[i] = str[i];

	new[len] = '\0';

	return (new);
}
