#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: lowest number
  * @max: biggest number
  * Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
