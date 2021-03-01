#include <stdio.h>
#include <stdlib.h>
/**
* main - adds and prints sum of
* positive numbers.
* @argc: number of arguments passed.
* @argv: pointer to array of size argc
* containing passed arguments.
*
* Return: 0 on success otherwise 1.
*/
int main(int argc, char argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
