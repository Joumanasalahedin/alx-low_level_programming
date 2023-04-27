#include "main.h"

/**
  * more_numbers - prints numbers 0 to 14
  *
  * Return: numbers 0 to 14 10 times
  */

void more_numbers(void)
{
	int a, count;

	for (count = 0; count < 10; count++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
	_putchar('\n');	
	}
}
