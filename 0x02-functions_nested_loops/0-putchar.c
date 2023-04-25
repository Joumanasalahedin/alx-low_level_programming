#include <stdio.h>
#include "main.h"

/**
 * main - Print _putchar and a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] =  "_putchar\n";
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{	
		_putchar(str[counter]);
	}
	_putchar('\n');
	return (0);
}
