#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *
  * @i: integar
  *
  * Return: absolute value
  */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}

	else if (i > 0)
	{
		return (i);
	}

	else if (i == 0)
	{
		return (0);
	}
	return (0);
}
