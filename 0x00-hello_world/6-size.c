#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types based on
 * the computer it is compiled and run oon
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int m;
	long long int b;
	char a;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", sizeof(m));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
