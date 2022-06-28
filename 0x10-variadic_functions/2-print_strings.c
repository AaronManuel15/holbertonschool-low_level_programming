#include <stdio.h>
#include <string.h>
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
	const char *sepref;

	va_start(ap, n);

	if (separator == NULL)
		sepref = "";
	else
		sepref = separator;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			strref = va_arg(ap, char *);
			if (strref != NULL)
				printf("%s%s", strref, sepref);
			else
				printf("(nil)%s", sepref);
		}
		strref = va_arg(ap, char *);
		if (strref != NULL)
			printf("%s",strref);
		else
			printf("(nil)");
	}

	printf("\n");

	va_end(ap);
}
