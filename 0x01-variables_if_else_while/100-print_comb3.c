#include<stdio.h>

/**
 *  * main - prints all possible different combinations of two digits
 *   *
 *    * Return: ALways 0 (Success)
 */
int main(void)
{	int u, v;
	for (u = 48; u <= 56; u++)
	{
		for (v = 49; v <= 57; v++)
		{
			if (v > u)
			{
				putchar(u);
				putchar(v);
				if (u != 56 || v != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
