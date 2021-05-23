#ifndef HOLBERTON_H
#define HOLBERTON_H

/* library inclusions */
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int findlength(char *str);
char create_arrayx(int size);
int get_digit(char c);
char *find_zeros(char *str);
void product(char *prod, char *mult, int digit, int zeros);
void sums(char *fin, char *tmp, int tmplen);
void printstring(char *str);
#endif
