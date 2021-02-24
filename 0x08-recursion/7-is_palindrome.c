#include "holberton.h"

/**
* _strlen_recursion - returns length of string
* @s: pointer to string
*
* Return: length of a string
*/

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

/**
* niPalindrome - check if string is palindrome
* @s: pointer to string
* @fi: first index
* @li: last index
*
* Return: 0 if not, 1 if true
*/

int niPalindrome(char *s, int fi, int li)
{
if (fi < li && s[fi] == s[li])
{
niPalindrome(s, fi + 1, li - 1);
}
if (s[fi] != s[li])
{
return (0);
}
return (1);
}

/**
* is_palindrome - checks if string is palindrome or not
* @s: pointer to string
*
* Return: 1 if palindrome otherwise return 0
*/

int is_palindrome(char *s)
{
int fi, int li;

fi = 0;
li = _strlen_recursion(s) - 1;

return (niPalindrome(s, fi, li));
}
