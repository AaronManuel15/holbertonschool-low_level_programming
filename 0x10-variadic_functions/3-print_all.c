#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 *
 * @ap: given
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints int
 *
 * @ap: given
 * Return: void
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 *
 * @ap: given
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 *
 * @ap: given
 */
void print_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Task 3: prints anything, followed by newline
 *
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	va_list ap;

	format_type printtypes[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (*printtypes[j].format == format[i])
			{
				printf("%s", sep);
				printtypes[j].func(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(ap);
}
