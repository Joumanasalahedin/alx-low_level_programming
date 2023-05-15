#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer with contents of s1 and s2
  */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len = 0, l = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[l] != '\0')
		l++;

	len += l;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
