#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		if ((k == '2') || (k == '4'))
			k++;
		_putchar(k);
	}
	_putchar('\n');
}
