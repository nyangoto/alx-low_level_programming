#include "holberton.h"
/**
 *_strchr - locates character in string.
 *@s: poijnter to string.
 *@c: character to be found.
 *
 *Return: pointer to 1st occurence of character
 *or null if character is not found.
*/
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	if (s.[i] == c)
	{
		p = &s[i];
	}
	return (p);
}

