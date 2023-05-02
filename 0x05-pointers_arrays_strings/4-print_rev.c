#include "main.h"

/**
  * print_rev - prints a string in reverse
  *
  * @s: string
  *
  * Return: prints string in reverse then a new line
  */

void print_rev(char *s)
{
	char *str = s;
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	str--;

	while (str >= s)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
