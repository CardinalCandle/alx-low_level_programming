#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: size of the triangle
* Return: void
*/
void print_triangle(int size)
{
	int i, s, p;

	for (i = 0; i < size; i++)
	{
		for (s = size - 1 ; s > i; s--)
		{
			_putchar(32);
		}
		for (p = 0; p <= i; p++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
