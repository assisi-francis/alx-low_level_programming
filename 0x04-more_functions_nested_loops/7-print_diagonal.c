#include "main.h"

/**
 * print_diagonal - print diagonal line in the terminal
 * 
 * @n: input integer
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
	       		_putchar(' ');
		}
		_putchar('\\');

		if (len == n -1)
			continue;

		_putchar('\n');
	}
}
