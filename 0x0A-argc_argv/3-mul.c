#include <stdio.h>
#include <stdlib.h>
/**
* main - prints results of a multiplication
* followed by a new line
* @argc: number of arguments passed.
* @argv: array of size argc, containing arguments passed.
*
* Return: 0 on success otherwise 1.
*/
int main(int argc, char *argv[])
{
	int i, p;

	p = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			p = atoi(argv(i);
		}
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
