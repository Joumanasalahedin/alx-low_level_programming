#include "main.h"

/**
  * print_alphabet - Print the alphabet in lowercase and new line
  *
  * Return: Always 0 (Sucess)
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
