#include "main.h"

/**
 * swap_int - Task 1
 *
 * @a: given from user to swap
 * @b: given from user to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
