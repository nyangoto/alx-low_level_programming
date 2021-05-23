#include "holberton.h"

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: pointer to memory previously allocated by malloc.
  * @old_size: size in bytes of space allocated for ptr.
  * @new_size: new size in bytes for memory block.
  *
  * Return: If successful, pointer to new memory block.
  * if new_size == old_size, return ptr.
  * if new_size == NULL and ptr != NULL, return NULL.
  * if malloc error, return NULL.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == 0 && ptr == 0 && old_size != 0)
	{
		nptr = malloc(old_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	if (ptr == 0 && new_size != 0)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	j = new_size > old_size ? old_size : new_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	optr = ptr;
	for (i = 0; i < j; i++)
		*(nptr + i) = optr[i];
	free(ptr);
	return (nptr);
}
