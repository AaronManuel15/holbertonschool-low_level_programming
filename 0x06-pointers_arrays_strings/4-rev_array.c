#include "holberton.h"

/**
 * reverse_array - Task 4
 *
 * @a: array of integers to be reversed
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, holder;

	for (i = 0; i < n / 2; i++)
	{
		holder = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = holder;
	}
}
