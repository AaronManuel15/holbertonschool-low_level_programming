#include "main.h"
/**
 * print_last_digit - Task 7 program prints the last digit of int
 *
 * @n: Input from user or program
 *
 * Return: 0 (Successful)
 *
 */
int print_last_digit(int n);
{	
	n = n % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n);
return (n);
}
