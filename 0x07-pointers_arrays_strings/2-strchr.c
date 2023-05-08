#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string
  * @c: character
  * Return: pointer to first occurence of c
  */

char *_strchr(char *s, char c)
{
	char *pr = NULL;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pr = &s[i];
		}
	}
	if (s[i] == c)
	{
		pr = s[i];
	}

	return (pr);
}
