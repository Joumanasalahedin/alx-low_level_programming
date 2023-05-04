#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: string
  * Return: encoded string
  */

char *leet(char *str)
{
	char * alph = "aAeEoOtTlL";
	char * num = "4433007711";

	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[a] == alph[n])
			{
				str[a] = num[n];
				break;
			}
		}
	}

	return (str);
}
