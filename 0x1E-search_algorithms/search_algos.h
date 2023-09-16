#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Linear Search */
int linear_search(int *array, size_t size, int value);

/* Binary Search */
int binary_search(int *array, size_t size, int value);

/* Jump Search */
int jump_search(int *array, size_t size, int value);

/* Interpolation Search */
int interpolation_search(int *array, size_t size, int value);

/* Exponential Search */
int exponential_search(int *array, size_t size, int value);

/* Advanced Binary Search */
int advanced_binary(int *array, size_t size, int value);

/* Jump Search */
int jump_search(int *array, size_t size, int value);

void print_list(const listint_t *list);
void free_list(listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);

#endif
