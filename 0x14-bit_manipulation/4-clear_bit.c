#include "holberton.h"
/**
  * getp - returns value of x to the power of y.
  * @x: number.
  * @y: power.
  *
  * Return: x to the power of y.
  */
int getp(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1 )
		return (x);
	return (x * getp(x, y - 1));
}

/**
  * clear_bit - clears value of bit at given index.
  * @n: pointer to number.
  * @index: index of bit.
  *
  * Return: 1 on SUCCESS,
  * -1 on FAILURE.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n)
	{
		*n -= getp(2, index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
