#include "main.h"

/**
 * get_bit - returns value at i
 * @n: unsigned long int input.
 * @i: i of the bit.
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int i)
{
	unsigned int i;

	if (n == 0 && i < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i += 1)
	{
		if (i == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
