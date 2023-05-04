#include "main.h"

/**
  * _strcmp - comapres two strings
  * @s1: first string
  * @s2: second string
  * Return: difference
  */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			break;
		i++;
	}

	diff = s1[i] - s2[i];

	return (diff);
}
