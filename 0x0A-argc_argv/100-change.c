#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	long int number = 0, temp = 0, coin_counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		} else
		{
			number = atoi(argv[1]);

			temp = number / 25;
			coin_counter += temp;
			number -= temp * 25;

			temp = number / 10;
			coin_counter += temp;
			number -= temp * 10;

			temp = number / 5;
			coin_counter += temp;
			number -= temp * 5;

			temp = number / 2;
			coin_counter += temp;
			number -= temp * 2;

			coin_counter += number;

			printf("%ld\n", coin_counter);
		}
	}
	return (0);
}
