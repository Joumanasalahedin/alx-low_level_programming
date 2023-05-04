#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: first string
  * @src: second string
  * @n: bytes of src
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != src[n])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
