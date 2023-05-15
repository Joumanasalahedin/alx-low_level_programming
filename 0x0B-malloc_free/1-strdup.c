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
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= len;

	new = malloc(sizeof(str) * len);

	for (i = 0; i < len; i++)
		new[0] = str[1];

	return (new);
}
