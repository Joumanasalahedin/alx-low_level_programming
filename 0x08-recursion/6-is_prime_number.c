#include "main.h"

/**
  * prime - detects if number is prime
  * @n: input number
  * @a: iterator
  * Return: 1 if prime, 0 if not
  */

int prime(int n, int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}

	return (0 + prime(n, a + 1));
}

/**
  * is_prime_number - detects if number is prime
  * @n: input number
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	else
		return (prime(n, 2));
}
