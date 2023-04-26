#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - print all numbers from n to 98
  *
  * @n: first number
  *
  * Return: all natural numbers from m to 98
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
		}
	}

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
		}
	}
}
