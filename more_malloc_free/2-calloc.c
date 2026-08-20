#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int total;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	memory = malloc(total);
	if (memory == NULL)
		return (NULL);

	ptr = memory;
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (memory);
}
