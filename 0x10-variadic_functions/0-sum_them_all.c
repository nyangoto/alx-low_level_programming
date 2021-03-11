#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns sum of all its parameters.
* @n: number of parameters passed.
*
* Return: SUM of parameters or
* 0 if n == 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
