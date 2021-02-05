#include <stdio.h>

/**
* main _ This is the main function
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: function exits with 0
*/
int main(void)
{
char c, d;

for (c = 'a'; c <= 'z'; c++
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar(10);
return(0);
}
