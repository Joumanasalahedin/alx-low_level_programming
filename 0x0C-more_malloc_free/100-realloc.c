#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to the memory previously allocated with old_size
  * @old_size: size of allocated space for ptr
  * @new_size: new size of new memory block
  * Return: pointer to new memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
