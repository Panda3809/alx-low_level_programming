#include "main.h"
/**
 *  * a function that checks for lowercase character
 *   * @c: The character to evaluate*
 *    * Return: Get 1 if c is uppercase,
 *     * get 0 otherwise
 */
int _islower(int c)
{	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
