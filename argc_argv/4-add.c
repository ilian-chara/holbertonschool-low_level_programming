#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - make addition
* @argc: lenght of argv
* @argv: array of string
* Return: 1 if there's achar else 0
*/

int main(int argc, char *argv[])
{
	int s = 0, n, e;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (e = 1; e < argc; e++)
	{
		for (i = 0; argv[e][i] != '\0'; i++)
		{
		if (!isdigit((unsigned char)argv[e][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	n = atoi(argv[e]);
	s += n;
	}
	printf("%d\n", s);
	return (0);
}
