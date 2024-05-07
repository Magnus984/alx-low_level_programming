#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
/*Standard Libraries*/
#include <stddef.h>
#include <stdio.h>
/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/*Support functions*/
void print_array(int L, int R, int *array);
#endif
