#include "holberton.h"
/**
* print_rev - prints string in reverse
* @s: pointer to string
*
* Return: void
*/
void print_rev(char *s)
{
int a, b;

while (*(s + a) != 0)
{
a++;
}
for (b = a - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
