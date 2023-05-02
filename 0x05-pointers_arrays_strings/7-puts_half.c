#include "main.h"

/**
  * puts_half - prints half of a string
  *
  * @str: string
  *
  * Return: no return
  */

void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
