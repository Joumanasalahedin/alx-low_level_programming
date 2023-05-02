#include "main.h"

/**
  * puts2 - prints every other character of a string
  *
  * @str: string
  *
  * Return: every other character of a string
  */

void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}

		if (count % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
