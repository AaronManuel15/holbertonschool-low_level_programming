#include "main.h"
/**
 * print_alphabet - Task 1 program that prints the alphabet, in lowercase, with \n
 *
 * Return: 0 (Successful)
 *
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
_putchar('\n');
}
