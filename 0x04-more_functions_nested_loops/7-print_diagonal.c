#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times character is printed
 *
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int a, b;
	char c = ' ';

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(c);
		}
		_putchar(92);
		_putchar('\n');
	}
}
