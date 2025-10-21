#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */

int main(void)
{
	int order;

	for (order = 0; order <= 9; order++)
	{
		putchar(order + 0);
		if (order != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
