#include "main.h"

/**
  * print_most_numbers - prints most numbers
  *
  * Return: prints 0 - 9 except 2 and 4 followed by a new line
  */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
