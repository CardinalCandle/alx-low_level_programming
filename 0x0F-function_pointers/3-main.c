#include "3-calc.h"
/**
 * main - entry
 * @argc: int
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	char *op = argv[2];
	int b = atoi(argv[3]);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((*op == '\\' || *op == '%') && b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
