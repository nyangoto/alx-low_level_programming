#include "holberton.h"

/**
* main - This is the main function.
* Description: This function prints out the alphabet ten times followed by a new line.
* Return: function returns null
*/
void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 0; i <= 9; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
