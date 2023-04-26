#include "main.h"

/**
  * jack_bauer - prints every minute of the day
  *
  * Return: 0
  */

void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

	for (hour1 = 48; hour1 <= 50; hour1++)
	{
		for (hour2 = 48; hour2 <= 57; hour2++)
		{
			for (min1 = 48; min1 <= 53; min1++)
			{
				for (min2 = 48; min2 <= 57; min2++)
				{
					if (hour1 >= 50 && hour2 >= 52)
						break;
					_putchar(hour1);
					_putchar(hour2);
					_putchar(';');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
				}
			}
		}
	}
}
