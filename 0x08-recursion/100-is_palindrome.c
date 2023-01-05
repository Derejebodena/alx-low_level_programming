#include "main.h"

/**
 * _lenght - checks the length of string
 * @s: is string
 * Return: return the length of string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}
/**
 * checkp - check if string is palindrome
 * @i: is the index
 * @lg: the length of string
 * @s: is string
 * Return: return 1 if string is  palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: is string
 * Return: return 1 if string is palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
