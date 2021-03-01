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
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{}

	printf("%d\n", i);
	return (0);
}
