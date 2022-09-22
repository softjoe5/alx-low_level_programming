#include "main.h"

/**
 * _strncpy - copy specific bytes of characters from one string to another
 *
 * @dest: the string to be copied to
 * @src: the string to copy
 * @n: number of bytes to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
