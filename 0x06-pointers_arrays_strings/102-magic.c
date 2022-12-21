#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * remember:
	 * - you are not allowed to use a
	 * - you are not allowed to use p
	 * - only one statement
	 *   you are not allowed to code anything else than this line of code
	 */

	*(p + 5) = 98;
		/* this print 98\n */
	print("a[2] = %d\n", a[2]);
	return (0);
}

