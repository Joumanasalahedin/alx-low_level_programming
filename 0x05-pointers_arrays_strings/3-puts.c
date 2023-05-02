#include "main.h"

/**
  * _puts - prints a string followed by a new line to stdout
  *
  * @str: string
  *
  * Return: string and new line to stdout
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
