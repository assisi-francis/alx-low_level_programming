#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase except e and p
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'p')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
