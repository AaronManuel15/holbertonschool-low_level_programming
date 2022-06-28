#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Task 2: prints strings, followed by newline
 *
 * @separator: separator to be printed between arguments
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strref;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			strref = va_arg(ap, char *);
			if (strref != NULL)
			{
				printf("%s%s", strref, separator);
			} else
				printf("(nil)%s", separator);
		}
		if (strref != NULL)
		{
			printf("%s", va_arg(ap, char *));
		} else
			printf("(nil)%s", va_arg(ap, char *));
	} else
	{
		for (i = 0; i < n; i++)
		{
			strref = va_arg(ap, char *);
			if (strref != NULL)
			{
				printf("%s", strref);
			} else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");

	va_end(ap);
}
