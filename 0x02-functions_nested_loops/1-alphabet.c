#include <stdio.h>

void print_alphabet(void);

/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - prints lowercase alphabet using putchar
*
* Return: 0
*/
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
