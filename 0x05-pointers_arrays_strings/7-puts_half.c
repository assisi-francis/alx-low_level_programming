#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = ((len - 1) / 2) + 1; j < len; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
