#include "main.h"

/**
  * print_triangle - prints a triangle
  *
  * @size: size of the triangle
  *
  * Return: triangle based on size given
  */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b < size - a; b++)
			{
				_putchar(' ');
			}

			for (b--; b < size; b++)
			{
				_putchar('#');
			}

			if (a < (size - 1))
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
