#include <stdio.h>
/**
* main - entry
* @argv: a
* @argc: int
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc <= 1)
	{
		return (0);
	}
	else
	{
	argv++;
	printf("%s\n", *argv);
	main(argc - 1, argv);
	}
	return (0);
}
