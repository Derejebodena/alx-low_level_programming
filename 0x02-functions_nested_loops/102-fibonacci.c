#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}

		first = second;
		second = next;

		next = first + second;
		count++;

	}
	printf("\n");
	return (0);
}
