#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * * Return: On succes
 * On failure, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
