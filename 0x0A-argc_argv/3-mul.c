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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
