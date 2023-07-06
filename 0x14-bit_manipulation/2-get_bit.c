#include "main.h"

/**
 * get_bit - returns the value at index.
 * @n: unsigned long int.
 * @index: index.
 * Return: value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i += 1)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
