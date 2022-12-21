#include "main.h"

/**
 * _strncpy - function that copies a string, including the
 * terminating null byte, using at most inputted number of byte
 * if length of source string is less than maximum byte number
 * the remainder of destination string is filled with null byte
 * works identically to standard library function 'strncpy'
 * @dest: buffer storing string copy
 * @src: the source string
 * @n: max number of byte copied from src
 * return: A pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
