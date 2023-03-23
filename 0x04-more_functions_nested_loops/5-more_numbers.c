#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line.
* Return: void
*/
void more_numbers(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '2'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (j == '1')
				{
					if (k >= '5')
					{
						break;
					}
					_putchar(j);
				}
				_putchar(k);
			}
		}
		_putchar('\n');
	}
}
