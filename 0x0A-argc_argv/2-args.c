#include <stdio.h>

/**
 * main - Task 2
 *
 *@argc: number of arguments passed
 *@argv: string of arguments passed
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
