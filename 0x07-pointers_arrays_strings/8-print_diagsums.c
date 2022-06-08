#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_diagsums - Task 7
 *
 *@a: double array to reference
 *@size: the size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		d1 += a[i];
	}
	j = size - 1;
	for (j = size - 1; i < size * size - 1; i += size - 1)
	{
		d2 += a[i];
	}
	printf("%d, %d\n",d1, d2);
}
