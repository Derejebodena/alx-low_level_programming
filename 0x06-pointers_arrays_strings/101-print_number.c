#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		print_number('-');
		num = -n;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	print_number((num % 10) + '0');
}
