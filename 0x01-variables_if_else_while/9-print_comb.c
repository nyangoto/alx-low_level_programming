#include <stdio.h>

/**
* main - This is the main function
* Description: Prints all the possible combinations of single digit numbers
* Return: exits with 0
*/
int main(void)
{
int num;

for (num = 48; num < 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
