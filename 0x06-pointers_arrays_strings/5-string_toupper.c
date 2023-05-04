#include "main.h"

/**
  * string_toupper - changes all lowercase to uppercase
  * @s: input string
  * Return: uppercase letters
  */

char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] -= 32;
		}

		n++;
	}

	return (s);
}
