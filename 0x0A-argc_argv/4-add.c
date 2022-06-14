#include <stdio.h>
#include <stdlib.h>

/**
 * main - Task 4
 *
 *@argc: number of arguments passed
 *@argv: string of arguments passed
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			for (; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
