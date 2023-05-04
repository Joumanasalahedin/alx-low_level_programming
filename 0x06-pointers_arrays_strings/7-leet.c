#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: string
  * Return: encoded string
  */

char *leet(char *str)
{
	char *alph = "aAeEoOtTlL";
	char *num = "4433007711";

	int a, n;

	for (n = 0; str[n] != '\0'; n++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[a] == alph[b])
			{
				str[a] = num[b];
				break;
			}
		}
	}

	return (str);
}
