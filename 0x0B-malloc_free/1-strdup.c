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
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;

	str2 = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str2[i] = str[i];

	return (str2);
}
