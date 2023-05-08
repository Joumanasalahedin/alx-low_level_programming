#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: memory area copied into
  * @src: memory area copied from
  * @n: bytes
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
