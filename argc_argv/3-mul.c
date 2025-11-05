#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply arg 1 with arg 2 and print result
* @argc: number of argument (3)
* @argv: array of string of arguments
* Return: 1 if < 3 0 if nothings wrong
*/

int main(int argc, char *argv[])
{
	int e;
	int r;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	e = atoi(argv[1]);
	r = atoi(argv[2]);

	printf("%d\n", e * r);

	return (0);
}
