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
		return (0);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * getp(x,y - 1));
}

/**
  * set_bit - sets value of a bit to one at a given index.
  * @n: pointer to number.
  * @index: index of a bit.
  *
  * Return: 1 upon SUCCESS,
  * -1 upon FAILURE.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n += getp(2, index);
	}
	else
	{
		return (-1);
	}
	return (1);
}
