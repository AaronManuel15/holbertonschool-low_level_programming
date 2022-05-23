#include <stdio.h>

/**
 * main - Task 7 to print alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
putchar('\n');

return (0);
}
