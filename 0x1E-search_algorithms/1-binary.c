#include "search_algos.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>


/**
 * printArray - Prints the passed array
 *
 * @array: pointer to first element of array being searched
 * @low: starting index to print
 * @high: finishing index to print
 * Return: void
 */
void printArray(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	for (i = i; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_chop - Performs binary search in a sorted array of ints
 *
 * @array: pointer to first element of array being searched
 * @low: starting index
 * @high: final index
 * @value: value to search for in array
 * Return: first index where value is found upon success, else -1
 */
int binary_chop(int *array, size_t low, size_t high, int value)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;

		printArray(array, low, high);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_chop(array, low, mid - 1, value));

		return (binary_chop(array, mid + 1, high, value));
	}

	return (-1);
}

/**
 * binary_search - Performs binary search via binary_chop
 *
 * @array: pointer to first element of array being searched
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is found upon success, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_chop(array, 0, size - 1, value));
}
