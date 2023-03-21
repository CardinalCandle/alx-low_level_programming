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
	unsigned long i, n1, n2, fib;

	n2 = 2;
	n1 = 1;
	printf("\n%lu, %lu, ", n1, n2);
	for (i = 2; i <= max; i++)
	{
		fib = n2 + n1;
		if (i == max)
		{
			printf("%lu", fib);
		}
		else
		{
			printf("%lu, ", fib);
		}
		n1 = n2;
		n2 = fib;
		/*printf("\nFibonacci number %lu is%lu", i, fib);*/
	}
	/* printf("\nLast Fibonacci number %lu is%lu", i, fib);*/
}
