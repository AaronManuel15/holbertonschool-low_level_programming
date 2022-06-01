#include "main.h"

/**
 * swap_int - Task 1
 *
 * @a: given from user to swap
 * @b: given from user to swap
 * @c: used to hold value for swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
