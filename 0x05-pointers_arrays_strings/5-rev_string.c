#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char temp;

	while (*(s + 1) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
