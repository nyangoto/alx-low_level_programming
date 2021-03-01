#include <stdio.h>
#include <stdlib.h>
/**
* main - prints minimum no of coins to make
* change for an amount of money.
* @argc: number of arguments passed.
* @argv: pointer toarray of size argc
*
* Return: 0 on success, otherwise 1.
*/
int main(int argc, char *argv[])
{
int change, i;

change = 0;
if (argc == 2)
{
i = atoi(argv[1]);
if (i > 0)
{
for (; i >= 25; change++)
{
i = i - 25;
}
for (; i >= 10; change++)
{
i = i - 10;
}
for (; i >= 5; change++)
{
i = i - 5;
}
for (; i >= 2; change++)
{
i = i - 2;
}
for (; i >= 1; change++)
{
i = i  - 1;
}
}
printf("%d\n", change);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
