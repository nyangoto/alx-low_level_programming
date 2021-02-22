#include "holberton.h"
#include <stdlib.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *it locates the first occurence in the string s of any of
 *the bytes in the string accept.
 *@s: pointer ro string
 *@accept: pointer to string to be matched.
*
 *Return: pointer to byte in s that matches one of the bytes
 *in acept or NULL if no such bytes is found.
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				p = &s[i];
			break;
		}
	}
	return (p);
}
