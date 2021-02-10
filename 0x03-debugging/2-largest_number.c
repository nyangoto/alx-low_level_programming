#include "holberton.h"

/**
* largest_number - returns largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest integer
*/
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
largest = a;
}
else
{
if (a < b && b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
