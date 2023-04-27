#include "main.h"

/**
  * print_square - prints a square
  *
  * @size: integer for size of square
  *
  * Return: square followed by a new line
  */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
