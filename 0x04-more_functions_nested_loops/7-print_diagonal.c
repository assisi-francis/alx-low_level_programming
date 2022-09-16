#include "main.h"

/**
 * print_diagonal - printing diagonal line in the terminal
 * @n: inout integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
	       		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
