#include "main.h"

/**
 * print_diagonal - Task 7
 *
 * @n: number of times the character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{	
			for (i = 1; i < j; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
