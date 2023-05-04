#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: bytes from src
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
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

	while (src[b] != src[n])
	{
		*str1 = *str2;
		str1++;
		str2++;
		b++;
	}

	return (dest);
}
