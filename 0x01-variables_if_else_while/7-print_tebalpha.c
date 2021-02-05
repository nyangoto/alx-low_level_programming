#include <stdio.h>

/**
* main - This is the main function
* Description: Prints out the lowercase alphabet in reverse.
* Return: function returns 0
*/
int main(void)
{
char c;

for (c = 'z'; c <= 'a'; c--)
{
putchar(c);
}
putchar(10);
return (0);
}
