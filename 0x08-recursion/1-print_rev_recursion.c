#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Task 1
 *
 *@s: string to be printed in reverse followed by new line
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
