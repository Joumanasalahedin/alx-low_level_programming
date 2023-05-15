#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars & initializes it with a char
  * @size: size of the array
  * @c: char
  * Return: pointer of an array of chars
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
