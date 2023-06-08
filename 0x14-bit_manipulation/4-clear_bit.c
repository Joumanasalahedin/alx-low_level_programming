#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: unsigned long integer
  * @index: index 0 is set to
  * Return: 1 (Success) -1 (Failure)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= m;

	return (1);
}
