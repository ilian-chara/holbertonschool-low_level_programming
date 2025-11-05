#include <stdio.h>
#include <stdlib.h>
/**
* main - make addition
* @argc: lenght of argv
* @argv: array of string
* Return: 1 if there's achar else 0
*/

int main(int argc, char *argv[])
{
	int s = 0, n, e;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (e = 1; e < argc; e++)
	{
		n = atoi(argv[e]);

		if (n <= 0 && argv[e][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		s += n;
	}
	printf("%d\n", s);

	return (0);
}
