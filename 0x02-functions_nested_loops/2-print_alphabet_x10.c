#include "main.h"

/**
  * print_alphabet_x10 - print the alphabet 10x in lowercase and a new line
  *
  * Return: Always 0
  */

void print_alphabet_x10(void)
{
	char alphabet;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
