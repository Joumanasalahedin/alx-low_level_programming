#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *
  * @int: integar
  *
  * Return: absolute value
  */

int _abs(int i)
{
	if (i < 0)
	{
		i = 0 - i;
		_putchar(i);
	}

	else if (i > 0)
	{
		_putchar(i);
	}

	else if (i == 0)
	{
		_putchar('0');
	}
	return (0);
}
