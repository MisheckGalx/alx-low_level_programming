#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* HEADER FILES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* FUNCTION PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int Binary_Search(int *array, int value, size_t left, size_t right);

#endif /* SEARCH_ALGOS_H */
