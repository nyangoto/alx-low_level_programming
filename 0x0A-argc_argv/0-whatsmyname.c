#include <stdio.h>
/**
* main - prints program name
* @argc: number of programs in the command line.
* @argv: stores number of arguments passed in the command line.
*
* Return: 0 on sucess
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
