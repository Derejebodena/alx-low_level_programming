#include <stdlib.h>
/**
 * malloc_cheched - allocate memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
