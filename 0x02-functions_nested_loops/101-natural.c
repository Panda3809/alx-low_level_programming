#include "main.h"
/**
 ** main - Entry point of the program
 ** Description:
 ** This program calculates and prints the sum of all the multiples of 3 or 5
 ** Return: 0 (Success)
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 3; i < limit; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}
