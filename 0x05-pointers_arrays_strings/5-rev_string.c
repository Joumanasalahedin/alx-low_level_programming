#include "main.h"

/**
  * rev_string - reverses a string
  *
  * @s: string
  *
  * Return: reversed string
  */

void rev_string(char *s)
{
	char temp;
	char *start = s;
	char *end = s;

	while (*end)
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	_putchar('\n');
}
