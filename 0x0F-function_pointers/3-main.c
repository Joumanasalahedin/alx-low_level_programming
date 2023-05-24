#include "3-calc.h"

/**
  * main - performs simple operations
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4 || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
