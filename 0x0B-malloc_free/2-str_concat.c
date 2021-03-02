#include "holberton.h"
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
	unsigned int i, j, size = 0;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
		size++;

	for (i = 0; s2[i] != '\0')
		size++;

	str = malloc(sizeof(char) * (size + 1));
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[size] = '\0';
	return (str);
}
