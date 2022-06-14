#include <stdio.h>
#include <stdlib.h>

/**
 * main - Task 3
 *
 *@argc: number of arguments passed
 *@argv: string of arguments passed
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
