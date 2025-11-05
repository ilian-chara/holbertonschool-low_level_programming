#include <stdio.h>
/**
* main - print arguments followed by a \n
* @argc: number of arguments
* @argv: array of string
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	printf("%s\n", argv[e]);
	return (0);
}
