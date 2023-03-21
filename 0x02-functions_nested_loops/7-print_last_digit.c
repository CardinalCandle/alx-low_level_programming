#include <stdio.h>
#include "main.h"
/**
* print_last_digit - outputs the absolute value of an integer
* @n: number to check
* Return: value of the last digit
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
int r = n % 10;

_putchar(r + '0');
return (r);
}
