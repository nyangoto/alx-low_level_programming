#include "holberton.h"

/**
  *nBits - number of bits to be flipped.
  * @x: XOR of n and m.
  *
  * Return: number of bits.
  */
unsigned int nBits(unsigned int x)
{
	/* i  is a counter variable */
	unsigned int i;

	i = 0;
	while (x > 0)
	{
		i++;
		x &= (x - 1);
	}
	return (i);
}

/**
  * flip_bits - returns number of bits required to be flipped.
  * @n: number
  * @m: number.
  *
  * Description: number of bits needed to flip to get from
  * one number to another.
  * Reeturn: number of bits.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (nBits(n ^ m));
}
