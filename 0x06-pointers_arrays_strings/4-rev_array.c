#include "main.h"

/**
  * reverse_array - reverses content of an array of integers
  * @a: array
  * @n: number of elements in array
  * Return: no return
  */

void reverse_array(int *a, int n)
{
	int temp, b;
	
	for (b = 0; i < n / 2; b++)
	{
		temp = a[b];
		a[b] = a[n - b - 1];
		temp = a[n - b - 1];
	}
}
