#include "main.h"

/**
  * print_numbers - prints numbers from 0 - 9
  *
  * Return: 0 - 9 followed by a new line
  */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
