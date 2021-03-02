#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenats two strings.
* @s1: pointer to a string.
* @s2: pointer to string.
*
* Return: pointer to newly allocated memory
* with s1, s2 and null byte.
* NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *str2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	size = len1 + len2;

	str2 = malloc((sizeof(char) + 1);

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str2[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		str2[i] = s2[j];
		i++;
		j++;
	}
	return (str2);
}
