#include "main.h"

/**
 * reverse_array - reverese an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}