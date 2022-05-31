#include "main.h"

/**
 * print_triangle - Task 10
 *
 * @size: input from user for size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		j = 1;
		k = size;
		while (j <= size)
		{
			for (i = k - 1; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 1; i <= j; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		j++;
		k--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
