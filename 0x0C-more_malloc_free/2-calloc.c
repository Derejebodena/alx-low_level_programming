#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte size each array of elements
 * Return: if nmemb = 0, size = 0, or the functions fails NULL
 * otherwise - pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);
}
