#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Linear Search */
int linear_search(int *array, size_t size, int value);

/* Binary Search */
int binary_search(int *array, size_t size, int value);

/* Jump Search */
int jump_search(int *array, size_t size, int value);

#endif
