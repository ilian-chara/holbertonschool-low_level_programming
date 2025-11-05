#include <stdio.h>
/**
* main - print all argument of the command line
* @argc: number of argument
* @argv: unused
* Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
