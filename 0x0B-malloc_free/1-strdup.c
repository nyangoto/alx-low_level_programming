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
	unsigned int len, i;
	char *str2;

	if (!*str)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	str2 = malloc((sizeof(char) * len) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}
	str2[i + 1] = '\0';

	return (str2);
}
