#include "main.h"

/**
 * puts2 - Task 6
 *
 * @str: given from user to be printed in pieces
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
