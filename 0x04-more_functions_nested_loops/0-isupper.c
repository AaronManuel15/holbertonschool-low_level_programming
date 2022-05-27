#include <stdio.h>
#include "main.h"

/**
 * _isupper - Task 0
 * @c: input from user for comparison
 * Return: 1 for yes, 0 for no
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
