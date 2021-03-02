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
	unsigned int i = 0, j = 0, ss1 = 0, ss2 = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ss1] != '\0')
		ss1++;

	while (s2[ss2] != '\0')
		ss2++;

	res = malloc(sizeof(char) * (ss1 + ss2));
	if (res == NULL)
		return (NULL);
	
	while (i < ss1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < ss2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] ='\0';
	return (res);

}
