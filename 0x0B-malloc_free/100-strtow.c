#include "holberton.h"
#include <stdio.h>

/**
* wordnos - counts number of words in a given string.
* @str: pointer to string.
*
* Return: number of words in the string.
* type - int.
*/
int wordnos(char *str)
{
	int word_no, i, j;

	word_no = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			while (*(str + j) != 32 && *(str + j) != '\0')
				j++;
			word_no++;
			i = j - 1;
		}
		i++;
	}
	return (word_no);
}

/**
* cpystr - copies words in string to 2D array of strings.
* @s: double pointer to a 2D array of strings.
* @str: pointer to string whose words are to be copied.
*
* Return: void.
*/
void cpystr(char **s, char *str)
{
	int i, j, k, idx;

	i = 0;
	idx = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			k = 0;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				s[idx][k] = *(str + j);
				k++;
				j++;
			}
			s[idx][k] = '\0';
			idx++;
			i = j;
		}
		i++;
	}
}
