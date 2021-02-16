#include <stdio.h>
#include "holberton.h"
/**
* print_array - takes two arguments and
* prints elements of an array
* @a: array of integers
* @n: number of elements to be printed
*
* Return: void
*/
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
a[i] = *(a + i);
printf("%d", a[i]);
if (i != n-1)
{
printf(", ")
}

}
}
