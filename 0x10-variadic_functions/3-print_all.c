#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char current_char;

	va_start(args, format);

	while (format && format[i])
	{
		current_char = format[i];
		if (current_char == 'c')
			printf("%c", va_arg(args, int));
		else if (current_char == 'i')
			printf("%d", va_arg(args, int));
		else if (current_char == 'f')
			printf("%f", va_arg(args, double));
		else if (current_char == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
		if (format[i])
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
