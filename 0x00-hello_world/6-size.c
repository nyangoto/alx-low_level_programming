#include <stdio.h>
/**
 * main - Program entry point
 * @void: no arguments
 * Description: the program starts and ends here.
 *Return: program exits with a value of 0
 */
int main(void)
{
  printf("Size of a char: %d byte(s)\n", sizeof(char));
  printf("Size of an int: %d byte (s)\n", sizeof(int));
  printf("Size of a long int: % byte(s)\n", sizeof(longint));
  printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
  printf("Size of a float: %d byte(s)\n", sizeof(float));
  return(0);
}
