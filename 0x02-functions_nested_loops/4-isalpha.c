#include "main.h"

/**
 *  * _isalpha - this check if a letter is lower or upper
 *  @c: The character to check
 *  * Return: 1 if lowercase and 0 if something else
 */
int _isalpha(int c)
{
	if ((c  >= 97 && c <= 122) || (c  >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
