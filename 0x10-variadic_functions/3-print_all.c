#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: list of types of arguments passed
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j, a = 0;
	char *str;
	const char types[] = "cifs";

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j] && a == 1)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), a = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), a = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), a = 1;
				break;
			case 's':
				str = va_arg(list, char *), a = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(list);
}
