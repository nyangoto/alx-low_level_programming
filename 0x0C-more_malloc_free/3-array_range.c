#include "holberton.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: lower end of range.
* @max: upper end of range.
*
* Return: array of int.
*/
int *array_range(int min, int max)
{
	unsigned int range, i;
	int *arr;

	if (min > max)
		return (NULL);

	range = max - min;
	arr = malloc(sizeof(int) * (range + 1));
	if (arr == NULL)
		return (arr);

	for (i = 0; i < range; i++)
		arr[i] = i + min;

	arr[range] = max;
	return (arr);
}
