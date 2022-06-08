#include "main.h"
#include <stdio.h>

/**
 *isqrt_rec - Doing the real work
 *
 *@n: integer being rooted by 2
 *@k: guess for square root value
 *
 * Return: int
 */

int isqrt_rec(long k, int n)
{
	long next_k = (k + n / k) / 2;

	if (k * k == n)
	{
		return (k);
	} else if (k * k < n && (k + 1) * (k + 1) > n)
	{
		return (-1);
	}
	return (isqrt_rec(next_k, n));
}

/**
 *_sqrt_recursion - Task 4
 *isqrt_rec - passes n and a starting point of 1 to above
 *@n: value to be rooted
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (isqrt_rec(1, n));
}
