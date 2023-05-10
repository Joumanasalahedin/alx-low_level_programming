#include "main.h"

/**
  * power_helper - returns natural square root of a number
  * @n: number
  * @a: iterator
  * Return: square root
  */

int power_helper(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}

	return (0 + power_helper(n, a + 1));
}

/**
  * _sqrt_recursion - natural square root of a number
  * @n: number
  * Return: natrual square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_helper(n, 2));
}
