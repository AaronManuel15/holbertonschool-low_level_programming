#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Task 4
 *
 *@x: integer base
 *@y: integer power
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
