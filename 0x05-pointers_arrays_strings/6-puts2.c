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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
