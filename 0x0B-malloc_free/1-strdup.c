#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - returns pointer to a newly allocated
* space in memory which contains copy of the string passed.
* @str: pointer to string being duplicated.
*
* Return: Pointer to dup string on success
* NULL if str is NULL.
* NULL if mem was insufficient.
*/
char *_strdup(char *str)
{
	char *str2;
	unsigned int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	str2 = malloc(sizeof(char) * (size + 1));

	if (str2 = NULL)
		return (NULL);
	
	while (i < size)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
