#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	char *str1;
	char *str2;

	str1 = dest;
	str2 = src;

	while (dest[a] != '\0')
	{
		++str1;
		a++;
	}

	while (src[b] != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
		b++;
	}

	return (dest);
}
