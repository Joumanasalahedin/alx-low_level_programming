#include "main.h"

/**
  * flip_bits - return number of bits needed flip to from one number to another
  * @n: unsigned long integer
  * @m: unsigned long integer
  * Return: number of bits needed to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int count = 0;

	while (a != 0)
	{
		count += a & 1;
		a >>= 1;
	}

	return (count);
}
