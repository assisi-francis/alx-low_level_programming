#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 48)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else if (i > 41)
		{
			putchar(i - 10 + 'A');
		}
		i++;
	}
	putchar(10);

	return (0);
}
