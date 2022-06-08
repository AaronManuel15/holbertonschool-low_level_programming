#include "main.h"
#include <stdio.h>

/**
 * primechecker - Doing the real work
 *
 *@num: number being checked for prime. passed by main
 *@i: changing number to check for divisibility
 *
 * Return: int
 */

int primechecker(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (primechecker(num, i - 1));
}

/**
 * is_prime_number - Task 6
 *@n: value to be checked for prime
 * Return: int
 */

int is_prime_number(int n)
{
	int turnout;

	turnout = primechecker(n, n / 2);

	return (turnout);
}
