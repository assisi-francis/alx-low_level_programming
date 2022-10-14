#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print char
 * @args: list of arguments
 */

void print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}

/**
 * print_int - prints int
 * @args: list of arguments
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - prints float
 * @args: list of arguments
 */

void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - prints string
 * @args: list of arguments
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(ops[j].c)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			ops[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
