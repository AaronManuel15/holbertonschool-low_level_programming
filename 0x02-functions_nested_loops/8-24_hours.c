#include "main.h"
/**
 * jack_bauer - Task 8 program prints the whole dig clock
 *
 * Return: 0 (Successful)
 *
 */
void jack_bauer(void)
{
int h;
int m;

for (h = 0; h <= 23; h++)
{
	_putchar('0' + (h / 10));
	_putchar('0' + (h % 10));
}
	for (m = 0; m <= 59; m++)
	{
		_putchar(':');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar('\n');
	}
}
