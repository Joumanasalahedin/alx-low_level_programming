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
	char *temp;

	len = 0;
	temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
