#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the opcodes of its own main function
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
	return (0);
}
