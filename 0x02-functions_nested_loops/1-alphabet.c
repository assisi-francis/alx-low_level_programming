#include "main.h"

/**
 * print_alphabet: prints alphabet in lowercase
 *
 * Description: prints alphabets in small letters
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
