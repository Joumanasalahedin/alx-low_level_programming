#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: bytes of s2 that will be used
  * Return: point to new space in memory with concatenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	str = malloc((l1 + n + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
