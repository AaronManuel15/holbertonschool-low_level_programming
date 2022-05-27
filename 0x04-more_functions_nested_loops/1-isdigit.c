#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Task 1
 * @c: input from user
 * Return: 1 for yes, 2 for no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
