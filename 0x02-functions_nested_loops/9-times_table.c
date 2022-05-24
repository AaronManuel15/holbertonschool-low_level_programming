#include "main.h"
/**
 * times_table - Task 9 program prints times table for 9
 *
 * Return: 0 (Successful)
 *
 */
void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		k = i * j;
		if (j != 9)
		_putchar(' ');
		else
		{
		_putchar('0' + (k / 10));
		_putchar('0' + (k % 10));
		}
	}
	_putchar('\n'); }
}
