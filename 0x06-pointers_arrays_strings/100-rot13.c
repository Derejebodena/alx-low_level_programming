#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: the string targated
 * return: returns the encode string
 */
char *rot13(char *)
{
	int index1, index2;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q' 
				, 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
