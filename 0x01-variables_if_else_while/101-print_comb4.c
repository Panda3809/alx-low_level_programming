#include <stdio.h>

/**
 *  * main - prints all possible different combinations of three digits
 *   * Return: Always 0 (Success)
 */
int main(void)
{	int q, r, n;
	for (q = 48; q < 58; q++)
	{
		for (r = 49; r < 58; r++)
		{
			for (n = 50; n < 58; n++)
			{
				if (n > r && r > q)
				{
					putchar(q);
					putchar(r);
					putchar(n);
					if (q != 55 || r != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
