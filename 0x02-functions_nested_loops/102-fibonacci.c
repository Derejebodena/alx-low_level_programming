#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, k, l;

	j = 1;

	k = 2;

	for (i = 0; i < 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld ", j);
		}
		l = j + k;
		j = k;
		k = l;
	}
	printf("\n");
	return (0);
}
