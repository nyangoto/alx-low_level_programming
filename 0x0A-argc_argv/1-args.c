#include <stdio.h>
/**
* main - prints number of arguments passed to it.
* @argc: number of arguments
* @argv: an array of size argc.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
