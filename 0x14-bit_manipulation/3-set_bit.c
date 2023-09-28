#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given i.
 * @n: pointer of an unsigned long int.
 * @i: i of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int i)
{
	unsigned int m;

	if (i > 63)
		return (-1);

	m = 1 << i;
	*n = (*n | m);

	return (1);
}
