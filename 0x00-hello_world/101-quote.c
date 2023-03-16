#include <unistd.h>

/**
* main - Outputs a character string to STDERR using fprintf.
*
* Return: Always 1
*/
int main(void)
{

char r[99] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, r, 99);
return (1);
}
