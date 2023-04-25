#include "main.h"

/**
  * _isalpha - checks for alphabetic characters
  *
  * @c: ASCII character
  *
  * Return: 1 for lowercase, 0 for rest
  */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
