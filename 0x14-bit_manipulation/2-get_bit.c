#include "holberton.h"
/**
  * get_bit - returns value of a bit at a given index.
  * @n: number.
  * @index: index a bit being queried.
  *
  * Return: value of bit at index OR
  * -1 if an error occurs.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index > 64)
		return (-1);
	bitstatus = (n >> index) & 1;

	return (bitstatus);
}
