#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints sum of two diagonals of a square matrix
  * @a: input pointer
  * @size: size of array
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
