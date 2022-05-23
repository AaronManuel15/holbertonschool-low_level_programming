#include <stdio.h>

/**
 * main - Task 9 to print all single-digit numbers with a comma to separate
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '9')
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar(x);
		}
	}

return (0);
}
