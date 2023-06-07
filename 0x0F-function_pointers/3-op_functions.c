#include "3-calc.h"
/**
 * op_add - add 2 integers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 integers
 * @a: int
 * @b: int
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 integers
 * @a: int
 * @b: int
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 integers
 * @a: int
 * @b: int
 * Return: result
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
 * op_mod - get the remainder of a division
 * @a: int
 * @b: int
 * Return: result
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
