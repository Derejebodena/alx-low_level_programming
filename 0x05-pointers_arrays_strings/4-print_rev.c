#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: this is input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
	return (0);
}