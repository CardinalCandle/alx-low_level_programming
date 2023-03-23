#include <stdio.h>
/**
*
*
*/
int main(void)
{
long long int n = 612852475143;
int i, r;

for (i = 2 ; i < n ; i++)
{
while (n % i == 0)
{
n = n / i;
}
}
printf("%lli\n", n);
return 0;

}
