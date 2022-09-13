#include "main.h"

/**
 * print_alphabet - prints alphabets 10 times
 *
 * Return: Always 0 (succes)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
