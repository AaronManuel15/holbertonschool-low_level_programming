#include <stdio.h>

/**
 * main - Task 8 to print all numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
putchar('\n');

return (0);
}
