#ifndef ALGOS_H
#define ALGOS_H
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_chop(int *array, size_t low, size_t high, int value);
void printArray(int *array, size_t low, size_t high);
int advanced_binary(int *array, size_t size, int value);
#endif
