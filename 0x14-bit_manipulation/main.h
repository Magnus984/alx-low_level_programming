#ifndef MAIN_H
#define MAIN_H

/*standard library*/
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>


/*function prototypes*/
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
