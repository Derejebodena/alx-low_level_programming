#include "3-calc.h"

/**
 * op_add - return sum of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - return difference of 2 numbers
 * @a: integer
 * @b: integere
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product of 2 numbers
 * @a: integer
 * @b: integere
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns quotient of 2 numbers
 * @a: integer
 * @b: integer
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return remainder of division
 * @a: integer
 * @b: integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
