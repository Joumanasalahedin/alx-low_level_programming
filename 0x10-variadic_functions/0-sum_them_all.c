#include "variadic_function.h"

/**
  * sum_them_all - adds all of its parameters
  * @n: constant integer
  * Return: sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n, i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
