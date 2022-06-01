#include "main.h"

/**
 * puts_half - Task 7
 *
 * @str: given from user for half to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		n = (len / 2) + 1;
		for (i = n; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		n = (len - 1) / 2;
		for (i = n; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
