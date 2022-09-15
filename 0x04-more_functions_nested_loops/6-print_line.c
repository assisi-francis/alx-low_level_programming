#include "main.h"

/**
 * print_line - draws a straigt line
 * @n: number of times to print line
 * Return: Always 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
