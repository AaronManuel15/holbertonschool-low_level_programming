#include "main.h"
/**
 * _abs(int n) - Task 6 program prints the abs val of int
 *
 * @n: Input from user or program
 *
 * Return: 0 (Successful)
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
		return (0);
	} else
	{
		n = n * -1;
		_putchar(n);
		return (0);
	}
return (0);
}
