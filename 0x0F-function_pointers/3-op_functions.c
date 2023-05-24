#include "3-calc.h"

/**
  * op_add - addition of two integers
  * @a: first integer
  * @b: second integer
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction of two integers
  * @a: first integer
  * @b: second integer
  * Return: difference of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication of two integers
  * @a: first integer
  * @b: second integer
  * Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of two integers
  * @a: first integer
  * @b: second integer
  * Return: result of division of a by b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modolus of a and b
  * @a: first integer
  * @b: second integer
  * Return: remainder of the divison of a by b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
