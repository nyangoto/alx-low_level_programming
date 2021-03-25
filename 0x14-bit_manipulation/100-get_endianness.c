#include "holberton.h"
/**
  * get_endianness - determines the endianness of a machine.
  *
  * Return: 0BE, 1LE.
  */
int get_endianness(void)
{
	unsigned int x = 0x7343211;

	char *c = (char *)&x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
