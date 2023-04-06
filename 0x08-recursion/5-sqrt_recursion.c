#include "main.h"
int _sqrt_recurse(int n, int i)
{
        if (i * i == n)
        {
                return (i);
        }
        else if (i <= 1)
        {
                return (-1);
        }
        else
        {
                return (_sqrt_recurse(n, i - 1));
        }
}

int _sqrt_recursion(int n)
{
        return (_sqrt_recurse(n, n / 2));
}

