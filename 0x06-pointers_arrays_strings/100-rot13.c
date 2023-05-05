#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string
  * Return: encoded string
  */

char *rot13(char *str)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (n = 0; n < 13; n++)
		{
			if (str[a] == alph[n])
			{
				str[a] = rot13[n];
				break;
			}
			else if (str[a] == rot13[n])
			{
				str[a] = alph[n];
				break;
			}
		}
	}
	return (str);
}
