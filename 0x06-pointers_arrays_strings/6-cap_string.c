#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @str: string
  * Return: capitalized string
  */

char *cap_string(char *str)
{
	int n = 0;
	char sep = ' ';

	while (str[n] != '\0')
	{
		if ((sep == ' ' || sep == '\t' || sep == '\n' || sep == ','
					|| sep == ';' || sep == '.' || sep == '!' || sep == '?' ||
					sep == '"' || sep == '(' || sep == ')' || sep == '{' || sep == '}')
				&& str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
		}

		sep = str[n];
		n++;
	}
	return (str);
}
