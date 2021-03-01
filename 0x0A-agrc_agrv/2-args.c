#include <stdio.h>
/**
* main - prints all received arguments.
* @argc: number of arguments received.
* @argv: array if size argc, containing all arguments received.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
