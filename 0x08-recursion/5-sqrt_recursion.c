#include "main.h"
/**
* _sqrt_recursion - do thing
* @n: int
* Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	return (_sqrt_recurse(n, n / 2));
	}
}
/**
* _sqrt_recurse - do thing
* @n: int
* @i: int
* Return: int
*/
int _sqrt_recurse(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i <= 0)
	{
		return (-1);
	}
	else
	{
	return (_sqrt_recurse(n, i - 1));
	}
}
