#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(list, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(list, char *));

			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
	}

	va_end(list);
}
