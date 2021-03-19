#include "lists.h"

void print_before(void) __attribute__ ((constructor));

/**
  * print_before - prints passed string
  * before main function.
  *
  * Return: NONE.
  */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
