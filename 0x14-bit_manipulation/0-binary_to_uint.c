#include "holberton.h"
/**
  * _strlen - retirns length of a string.
  * @s: pointer to string.
  *
  * Return: string length
  */
unsigned int _strlen(const char *s)
{
	/* i is a counter/looping var */
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * getp - return value of x to the power of y.
  * @x: integerr
  * @y: power
  *
  * Return: x to the power of y.
  * 0 if x is less than 0.
  */
int getp(int x, int y)
{
	if (y < 0)
		return (0);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * getp(x, y - 1));
}

/**
  * binary_to_uint - converts binary numbr to unsigned int.
  * @b: pointer to string containing input binary.
  *
  * Return: converted number or 0 if b is NULL
  * or if b is not in binary format.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, length, index;
	int power;

	length = _strlen(b);
	power = 0;
	num = 0;
	index = length - 1; /* null byte terminator exclusion */

	if (length && b)
	{
		while (length && b)
		{
			if (b[index] == 48 || b[index] == 49)
			{
				num = num + ((b[index] - 48) * getp(2, power));
				power++;
				index--;
				length--;
			}
			else
			{
				return (0);
			}
		}
		return (num);
	}
	return (0);
}
