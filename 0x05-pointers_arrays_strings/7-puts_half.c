#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: void
 */

void puts_half(char *str)
{
	int i. j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = 1;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
