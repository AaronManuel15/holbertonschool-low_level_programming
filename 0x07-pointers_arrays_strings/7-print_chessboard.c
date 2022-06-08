#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - Task 6
 *
 *@a: array that holds chessboard values.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
