#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	int printed = 0;

	for (int i = 0; format && format[i]; ++i)
	{
		char format_char = format[i];
		printed = 0;

		if (format_char == 'c')
		{
			printf("%c", va_arg(args, int));
			printed = 1;
		}

		if (format_char == 'i')
		{
			printf("%d", va_arg(args, int));
			printed = 1;
		}

		if (format_char == 'f')
		{
			printf("%f", (double)va_arg(args, double));
			printed = 1;
		}

		if (format_char == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			printed = 1;
		}

		if (format[i] && printed)
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
