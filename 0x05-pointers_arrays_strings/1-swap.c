#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: This is 1st entry
 * @b: This is 2nd entry
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
