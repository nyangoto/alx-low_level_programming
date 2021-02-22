#include "holberton.h"
#include <stdlib.h>
/**
 *_strstr - locates a substring.
 *findsd the first occurence of a substring needle
 *in the strings haystack with the exception of terminating null byte
 *@haystack: pointer to string.
 *@needle: pointer to substring to be matched.
 *
 *Return: pointer to byte in s that matches one of the bytes
 *in accept otherwise NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
				p = &haystack[i];
			break;
		}
	}
	if (needle[j] == '\0')
		p = &needle[i];

	return (p);
}
