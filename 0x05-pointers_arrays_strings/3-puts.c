#include "main.h"

/**
 * _puts - Task 3
 *
 * @str: given from user to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
