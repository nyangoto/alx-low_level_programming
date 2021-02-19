#include "holberton.h"

/**
* reverse_array - reverses content of int array
* @a: array
* @n: size of array
*
* Return: none
*/
void reverse_array(int *a, int n)
{
int tmp, i = 0, last;

last = n - 1;
while (i < last)
{
tmp = *(a + i);
*(a + i) = *(a + last);
*(a + last) = tmp;
i++;
last--;
}
}
