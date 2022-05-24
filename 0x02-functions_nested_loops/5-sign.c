#include "main.h"
/**
 * print_sign - Task 5 program prints the sign of n
 *
 * @n: Input from user or program
 *
 * Return: 0 (Successful)
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
_putchar('-');
return (-1);
}
