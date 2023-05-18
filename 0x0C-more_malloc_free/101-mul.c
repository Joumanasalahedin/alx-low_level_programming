#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * mul - multiplies two integers
  * @num1: first number
  * @num2: second number
  * Return: product of num1 and num2
  */

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
  * isdigit - checks if strings consist of only digits
  * @str: strings
  * Return: 0 (Success)
  */

int _isdigit(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
  * main - mutliplies two integers
  * @argc: number of command line arguments
  * @argv: array that contains the program command line arguments
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = mul(num1, num2);

	printf("%d\n", result);

	return (0);
}
