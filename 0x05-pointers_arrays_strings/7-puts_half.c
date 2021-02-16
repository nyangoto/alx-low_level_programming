#include "holberton.h"
/**
* puts_half - takes one argument
* and prints half a string
* @str: string value
*
* Return: void
*/
void puts_half(char *str)
{
int i = 0;
int len = 0;
int num;

while (str[i++])
{
len++;
}

if ((len / 2) == 0)
{
num = len / 2;
}
else
{
num = (len + 1) / 2;
}

for (i = num; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
