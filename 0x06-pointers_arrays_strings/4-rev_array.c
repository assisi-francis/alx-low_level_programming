#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: the array of integers to be reversed
 * @n: the number of elements in the arra
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		t = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = t;
	}
}
