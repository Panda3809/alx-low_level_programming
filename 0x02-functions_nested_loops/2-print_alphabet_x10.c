#include "main.h"

/**
 *  * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *   * Return: (0) Always 0.
 */

int print_alphabet_x10(void);

int main(void)

{	print_alphabet_x10();
	return (0);
}

int print_alphabet_x10(void)

{	char letter = 'a';
	int count = 0;
	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		count++;
	}
	return (0);
}
