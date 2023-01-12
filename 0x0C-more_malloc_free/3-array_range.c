#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer ordered
 * from min to max inclusive
 * @min: first value of array
 * @max: last value of array
 * Return: if min > max or fuction fails NULL
 * otherwise - pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array, size, index;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
