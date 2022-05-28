#include "main.h"

/**
 * print_square - Task 8
 *
 * @size: input from user for size of square
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{	
	for (j = 1; j <= size; j++)
		{	
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
