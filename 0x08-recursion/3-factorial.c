#include "main.h"
#include <stdio.h>

/**
 * factorial - Task 3
 *
 *@n: integer to be factorialed
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
