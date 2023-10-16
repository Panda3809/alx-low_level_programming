#include "main.h"

/**
 *  * print_rev - Prints a string in reverse, followed by a new line.
 *   * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	s -= length;
	while (length > 0)
	{
		s += (length - 1);
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
