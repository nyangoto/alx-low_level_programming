#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers followed by a new line
* with a string separator.
* @n: number of INTs passed.
* @separator: separating.
*
* Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, res;
	va_list ints;

	va_start(ints, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(ints, int);
		printf("%d", res);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ints);
	printf("\n");
}
