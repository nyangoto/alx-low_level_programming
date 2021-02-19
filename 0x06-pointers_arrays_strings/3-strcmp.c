#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: string to compare to s2
* @s2: string to compare to s1
*
* Return: difference btwn strings
*/
int _strcmp(char *s1, char *s2)
{
int i, output;

i = 0;
while (*(s1 + i) == *(s2 + i) &&*(s1 + i) != '\0')
i++;

output = (*(s1 + i) -*(s2 + i));

return (output);
}
