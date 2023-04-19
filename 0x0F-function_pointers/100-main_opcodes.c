#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int i = 0, bytes;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
		i++;
	}
	putchar('\n');
	return(0);
}
