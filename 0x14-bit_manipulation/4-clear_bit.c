#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer of an unsigned long int.
 * @i: i of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned int m;

	if (i > 63)
		return (-1);

	m = 1 << i;

	if (*n & m)
		*n ^= m;

	return (1);
}
