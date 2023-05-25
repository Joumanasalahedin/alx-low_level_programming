#include "variadic_functions.h"

/**
  * sum_them_all - adds all of its parameters
  * @n: constant integer
  * Return: sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(args);

	return (sum);
}
