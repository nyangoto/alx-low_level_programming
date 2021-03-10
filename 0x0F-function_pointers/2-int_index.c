#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array passed.
* @size: size of array.
* @cmp: callback function.
*
* Return: index of first element for which the cmp function des not return 0.
*/
int int_index(int *array, int size, int (*cmp)(itn))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i] == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
