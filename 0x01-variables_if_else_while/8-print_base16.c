#include <stdio.h>
/**
* main - This is the main function
* Description: prints all the numbers of base 16 in lowercase
* Return: function exits with 0
*/
int main(void)
{
int n, i, hex;

n = 48;
for (i = 0; i <= 9; i++)
{
putchar(n);
n++;
}
hex = 97;
for (i = 0; i <= 5; i++)
{
putchar(hex);
hex++;
}
putchar(10);
return (0);
}
