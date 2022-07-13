#include "main.h"
#include "myPow.c"

/**
 * print_binary - prints the binary of a given integer
 * @n: integer given
 *
 * Return: converted number on success, 0 on failure
 */

void print_binary(unsigned long int n)
{
	if (n >> 1 == 0)
	{
		_putchar(n - 2 * (n >> 1) + '0');
		return;
	}

	print_binary(n >> 1);

	_putchar(n - 2 * (n >> 1) + '0');

}
