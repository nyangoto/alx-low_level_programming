#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i;
	va_list ints;

	va_start(ints, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ints, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ints);
}
