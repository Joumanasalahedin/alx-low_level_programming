#include <stdio.h>

/**
  * main - prints all arguments it receieves
  * @argc: number of comand line arguments
  * @argv: array that contains the program command line arguments
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
