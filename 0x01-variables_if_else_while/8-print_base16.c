#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Sucess)
  */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
