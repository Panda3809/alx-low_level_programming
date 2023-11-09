#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a character
 * @args: A va_list containing argument to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer
 * @args: A va_list containing argument to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: A va_list containing argument to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: A va_list containing argument to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - Prints anything based on format
 * @format: A list of types of the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *valid_formats = "cifs";
	void (*print_functions[4])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);
	while (format && format[i])
	{
		int j = 0;

		while (valid_formats[j])
		{
			if (format[i] == valid_formats[j])
			{
				printf("%s", separator);
				print_functions[j](args);
				separator = ",";
				if (format[i + 1] && valid_formats[j + 1])
					printf(" ");
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
