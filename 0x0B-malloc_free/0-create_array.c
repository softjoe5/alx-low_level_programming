#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array an intialize it with a specified character
 *
 * @size: size of the array
 * @c: character to initialize the array
 * Return: NULL if size is 0 or fails to allocate memory
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size < 1)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		*(array + i) = c;
	return (array);
}
