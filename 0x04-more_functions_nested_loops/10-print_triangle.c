#include "main.h"

/**
 *  * print_triangle - prints a triangle with a given size
 *   * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size - row; col++)
				_putchar(' ');
			for (col = 1; col <= row; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
