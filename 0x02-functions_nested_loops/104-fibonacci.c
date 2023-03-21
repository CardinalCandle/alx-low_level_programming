#include <stdio.h>

void fibonacci(void);
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	fibonacci();
	return (0);
}

/**
* fibonacci - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: void
*/
void fibonacci(void)
{
	const unsigned long max = 98;
	long double i, n1, n2, fib;

	n2 = 2;
	n1 = 1;
	printf("\n%.0Lf, %.0Lf, ", n1, n2);
	for (i = 2; i < max; i++)
	{
		fib = n2 + n1;
		if (i == max - 1)
		{
			printf("%.0Lf", fib + 2);
		}
		if ((i == max - 2) || (i == max - 3))
		{
			printf("%.0Lf, ", fib + 1);
		}
		else
		{
			printf("%.0Lf, ", fib);
		}
		n1 = n2;
		n2 = fib;
		/*printf("\nFibonacci number %lu is%lu", i, fib);*/
	}
	putchar('\n');
}
