#include "holberton.h"
#include <stdio.h>
/**
 *_strspn - gets the length of a prefix substring.
 *@s: pointer to a string.
 *@accept: pointer to bytes that are checked.
 *for in s.
 *
 *Return: number of bytes in the initial
 *segment of s which consist only of bytes from
 *accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match = 0;

	i = o;
	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (accept[j] == s[i])
				{
					match = match + 1;
				}
				j++;
			}
		}
		else
			return (match);
		i++;
	}
	return (match);
}
