#include "main.h"

/**
 *  * _strcpy - copies the string pointed to by src to dest
 *   * @dest: destination buffer
 *    * @src: source string
 *     *
 *      * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
